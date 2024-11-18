#include "objects.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QDir>

// This file uses:
// - Factory creational pattern (for creating blocks, persons, and disasters)
// - Facade structural pattern (combining the three subsystems to provide a simple and useful interface for the ui classes to use)

/*******************************************************************************************************
************************ Start of Block Objects (Including BlockFactory) *******************************
*******************************************************************************************************/
void GrassBlock::print() { std::cout << "grass block" << std::endl; }

void WoodBlock::print() { std::cout << "wood block" << std::endl; }

void CobblestoneBlock::print() { std::cout << "cobblestone block" << std::endl; }

void ConcreteBlock::print() { std::cout << "concrete block" << std::endl; }

Block* BlockFactory::createBlock(BlockType type){
    if (BlockType::GRASS == type){
        return new GrassBlock();
    }
    else if (BlockType::WOOD == type){
        return new WoodBlock();
    }
    else if (BlockType::COBBLESTONE == type){
        return new CobblestoneBlock();
    }
    else if (BlockType::CONCRETE == type){
        return new ConcreteBlock();
    }
    else {
        return nullptr;
    }
}
/*******************************************************************************************************
********************************** End of Block Objects ************************************************
*******************************************************************************************************/



/*******************************************************************************************************
************************ Start of Person Objects (Including PersonFactory) ******************************
*******************************************************************************************************/
void Player::print(){ std::cout << "player" << std::endl; }
void Player::setLocation(std::pair<int,int> p){ location = p; }
std::pair<int,int> Player::getLocation(){ return location; }

void Robber::print(){ std::cout << "robber" << std::endl; }
void Robber::setLocation(std::pair<int,int> p){ location = p; }
std::pair<int,int> Robber::getLocation(){ return location; }

void Terrorist::print(){ std::cout << "terrorist" << std::endl; }
void Terrorist::setLocation(std::pair<int,int> p){ location = p; }
std::pair<int,int> Terrorist::getLocation(){ return location; }

Person* PersonFactory::createPerson(PersonType type){
    if (PersonType::PLAYER == type){
        return new Player();
    }
    else if (PersonType::ROBBER == type){
        return new Robber();
    }
    else if (PersonType::TERRORIST == type){
        return new Terrorist();
    }
    else {
        return nullptr;
    }
}
/*******************************************************************************************************
********************************** End of Person Objects ***********************************************
*******************************************************************************************************/



/*******************************************************************************************************
********************** Start of Disaster Objects (Including DisasterFactory) ***************************
*******************************************************************************************************/
void Flood::print() { std::cout << "flood" << std::endl; }
std::string Flood::getType() { return "flood"; }
bool Flood::canDestroy(EntityType type){ return canDestroySet.find(type) != canDestroySet.end(); }
std::vector<std::pair<int,int>> Flood::disperse(std::pair<int,int> p){
    int r = p.first, c = p.second;
    std::vector<std::pair<int,int>> ret;
    ret.push_back({r-1,c}); ret.push_back({r+1,c}); ret.push_back({r,c-1}); ret.push_back({r,c+1});
    ret.push_back({r-1,c-1}); ret.push_back({r-1,c+1}); ret.push_back({r+1,c-1}); ret.push_back({r+1,c+1});
    return ret;
}

void Wildfire::print() { std::cout << "wildfire" << std::endl; }
std::string Wildfire::getType(){ return "wildfire"; }
bool Wildfire::canDestroy(EntityType type){ return canDestroySet.find(type) != canDestroySet.end(); }
std::vector<std::pair<int,int>> Wildfire::disperse(std::pair<int,int> p){
    int r = p.first, c = p.second;
    std::vector<std::pair<int,int>> ret;
    ret.push_back({r-1,c}); ret.push_back({r+1,c}); ret.push_back({r,c-1}); ret.push_back({r,c+1});
    return ret;
}

void Tornado::print() { std::cout << "tornado" << std::endl; }
std::string Tornado::getType(){ return "tornado"; }
bool Tornado::canDestroy(EntityType type){ return canDestroySet.find(type) != canDestroySet.end(); }
std::vector<std::pair<int,int>> Tornado::disperse(std::pair<int,int> p){
    int r = p.first, c = p.second;
    std::vector<std::pair<int,int>> ret;
    ret.push_back({r-1,c-1}); ret.push_back({r-1,c+1}); ret.push_back({r+1,c-1}); ret.push_back({r+1,c+1});
    return ret;
}

Disaster* DisasterFactory::createDisaster(DisasterType type){
    if (DisasterType::FLOOD == type){
        return new Flood();
    }
    else if (DisasterType::WILDFIRE == type){
        return new Wildfire();
    }
    else if (DisasterType::TORNADO == type){
        return new Tornado();
    }
    else {
        return nullptr;
    }
}
/*******************************************************************************************************
********************************** End of Disaster Objects *********************************************
*******************************************************************************************************/



/*******************************************************************************************************
****************** Start of EntityFacade (Stores and Manages all important game entities) **************
*******************************************************************************************************/
void EntityFacade::initBuildingPhase(){
    for (int i = 0; i < NUM_OF_GRID_ROWS; i++) {
        for (int j = 0; j < NUM_OF_GRID_COLUMNS; j++) {
            gridData[i][j] = {nullptr, EntityType::EMPTY};
        }
    }
    updateCell({NUM_OF_GRID_ROWS/2, NUM_OF_GRID_COLUMNS/2}, EntityType::PLAYER);
}

void EntityFacade::initSimulationPhase(){
    std::vector<std::pair<int,int>> emptyCellsOnEdgeOfGrid;
    for (int i = 0; i < NUM_OF_GRID_ROWS; i++){
        for (int j = 0; j < NUM_OF_GRID_COLUMNS; j++){
            if ((i == 0 || j == 0 || i == NUM_OF_GRID_ROWS-1 || j == NUM_OF_GRID_COLUMNS-1) && gridData[i][j].second == EntityType::EMPTY){
                emptyCellsOnEdgeOfGrid.push_back({i,j});
                hadDisaster[i][j] = false;
            }
        }
    }
    // there is guaranteed to be >= 3 available cells due to: the budget, cost of the minimum block type, number of persons on the grid, and number of cells on the edge of grid
    std::random_device rd; std::mt19937 g(rd());
    std::shuffle(emptyCellsOnEdgeOfGrid.begin(), emptyCellsOnEdgeOfGrid.end(),g);
    std::pair<int,int> robberStartingLocation = emptyCellsOnEdgeOfGrid[0], terroristStartingLocation = emptyCellsOnEdgeOfGrid[1], disasterStartingLocation = emptyCellsOnEdgeOfGrid[2];
    updateCell(robberStartingLocation, EntityType::ROBBER);
    updateCell(terroristStartingLocation, EntityType::TERRORIST);
    updateCell(disasterStartingLocation, disasterType);
    hadDisaster[disasterStartingLocation.first][disasterStartingLocation.second] = true;
}

void EntityFacade::updateCell(std::pair<int,int> location, EntityType entityType){
    int r = location.first, c = location.second;
    switch(entityType){
        case EntityType::GRASS:
            gridData[r][c] = {blockFactory->createBlock(BlockType::GRASS), EntityType::GRASS};
            break;
        case EntityType::WOOD:
            gridData[r][c] = {blockFactory->createBlock(BlockType::WOOD), EntityType::WOOD};
            break;
        case EntityType::COBBLESTONE:
            gridData[r][c] = {blockFactory->createBlock(BlockType::COBBLESTONE), EntityType::COBBLESTONE};
            break;
        case EntityType::CONCRETE:
            gridData[r][c] = {blockFactory->createBlock(BlockType::CONCRETE), EntityType::CONCRETE};
            break;
        case EntityType::PLAYER:
            player->setLocation(location);
            gridData[r][c] = {player, EntityType::PLAYER};
            break;
        case EntityType::ROBBER:
            robber->setLocation(location);
            gridData[r][c] = {robber, EntityType::ROBBER};
            break;
        case EntityType::TERRORIST:
            terrorist->setLocation(location);
            gridData[r][c] = {terrorist, EntityType::TERRORIST};
            break;
        case EntityType::FLOOD:
            gridData[r][c] = {disasterFactory->createDisaster(DisasterType::FLOOD), EntityType::FLOOD};
            break;
        case EntityType::WILDFIRE:
            gridData[r][c] = {disasterFactory->createDisaster(DisasterType::WILDFIRE), EntityType::WILDFIRE};
            break;
        case EntityType::TORNADO:
            gridData[r][c] = {disasterFactory->createDisaster(DisasterType::TORNADO), EntityType::TORNADO};
            break;
        case EntityType::EMPTY:
            gridData[r][c] = {nullptr, EntityType::EMPTY};
            break;
    }
}

EntityType EntityFacade::getEntityAtCell(std::pair<int,int> location){
    int r = location.first, c = location.second;
    return gridData[r][c].second;
}

bool EntityFacade::isCellEmpty(std::pair<int,int> location){ return gridData[location.first][location.second].second == EntityType::EMPTY; }
bool EntityFacade::isCellInBounds(std::pair<int,int> location){ return 0 <= location.first && location.first < NUM_OF_GRID_ROWS && 0 <= location.second && location.second < NUM_OF_GRID_COLUMNS; }
bool EntityFacade::isCellAvailable(std::pair<int,int> location){ return isCellInBounds(location) && isCellEmpty(location); }

void EntityFacade::setBudget(int v){ budget = v; }
int EntityFacade::getBudget(){ return budget; }
void EntityFacade::setDisasterType(EntityType type){
    disasterType = type;
    if (type == EntityType::FLOOD) { disaster = new Flood(); disasterPic = (QPixmap(QString::fromStdString(":/img/img/flood.jpg"))); }
    if (type == EntityType::WILDFIRE) { disaster = new Wildfire(); disasterPic = (QPixmap(QString::fromStdString(":/img/img/wildfire.jpg"))); }
    if (type == EntityType::TORNADO) { disaster = new Tornado(); disasterPic = (QPixmap(QString::fromStdString(":/img/img/tornado.jpg"))); }
}
EntityType EntityFacade::getDisasterType(){ return disasterType; }
QPixmap EntityFacade::getDisasterPic() { return disasterPic; }
void EntityFacade::setEnemyMoveSpeedInMilliseconds(int newMoveSpeed){ enemyMoveSpeedInMilliseconds = newMoveSpeed; }
int EntityFacade::getEnemyMoveSpeedInMilliseconds(){ return enemyMoveSpeedInMilliseconds; }

void EntityFacade::movePlayer(int dr, int dc){
    // std::cout << gameOverStatus << " " << cause_of_death << std::endl;
    if (gameOver()) return;
    std::pair<int,int> currentPlayerLocation = player->getLocation();
    int r = currentPlayerLocation.first, c = currentPlayerLocation.second;
    int nr = currentPlayerLocation.first+dr, nc = currentPlayerLocation.second+dc;
    if (isCellAvailable({nr,nc})){
        updateCell({r,c},EntityType::EMPTY);
        updateCell({nr,nc},EntityType::PLAYER);
    }
    else if (isCellInBounds({nr,nc})){
        EntityType otherCellType = gridData[nr][nc].second;
        if (otherCellType == EntityType::ROBBER){
            gameOverStatus = true; cause_of_death = "Cause of death: you touched the robber";
        }
        else if (otherCellType == EntityType::TERRORIST){
            gameOverStatus = true; cause_of_death = "Cause of death: you touched the terrorist";
        }
        else if (otherCellType == EntityType::FLOOD || otherCellType == EntityType::WILDFIRE || otherCellType == EntityType::TORNADO){
            gameOverStatus = true; cause_of_death = "Cause of death: you touched the " + disaster->getType();
        }
    }
}

void EntityFacade::moveEnemy(){
    if (gameOver()) return;

    int move[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};

    if (moveLoop[moveLoopIndex] == "D"){ // move disaster
        std::vector<std::pair<int,int>> toAdd, toRemove; bool hasDisaster = false;
        for (int i = 0; i < NUM_OF_GRID_ROWS; i++){
            for (int j = 0; j < NUM_OF_GRID_COLUMNS; j++){
                if (gridData[i][j].second != disasterType) continue;
                hasDisaster = true; toRemove.push_back({i,j});
                std::vector<std::pair<int,int>> candidateCells = disaster->disperse({i,j});
                for (std::pair<int,int> p : candidateCells) {
                    if (isCellInBounds(p) && hadDisaster[p.first][p.second]) continue;
                    if (isCellAvailable(p)){
                        toAdd.push_back({p.first,p.second});
                    }
                    else if (isCellInBounds(p)){
                        if (gridData[p.first][p.second].second == EntityType::PLAYER){
                            gameOverStatus = true; cause_of_death = "Cause of death: you touched the " + disaster->getType(); return;
                        }
                        else if (disaster->canDestroy(gridData[p.first][p.second].second)){
                            toAdd.push_back({p.first,p.second});
                        }
                    }
                }
            }
        }
        for (std::pair<int,int> p : toAdd) {
            updateCell({p.first,p.second}, disasterType);
            hadDisaster[p.first][p.second] = true;
        }
        for (std::pair<int,int> p : toRemove) {
            updateCell({p.first,p.second}, EntityType::EMPTY);
        }
        if (!hasDisaster){
            respawnDisaster();
        }
    }

    if (moveLoop[moveLoopIndex] == "R"){ // move robber
        std::pair<int,int> robberLocation = robber->getLocation();
        std::pair<int,int> nearestBlock; int nearestBlockDist = INT_MAX;
        for (int i = 0; i < NUM_OF_GRID_ROWS; i++){
            for (int j = 0; j < NUM_OF_GRID_COLUMNS; j++){
                if (gridData[i][j].second == EntityType::GRASS || gridData[i][j].second == EntityType::WOOD || gridData[i][j].second == EntityType::COBBLESTONE || gridData[i][j].second == EntityType::CONCRETE){
                    int dist = std::abs(robberLocation.first-i)+std::abs(robberLocation.second-j);
                    if (dist < nearestBlockDist){
                        nearestBlockDist = dist;
                        nearestBlock = {i,j};
                    }
                }
            }
        }
        if (nearestBlockDist != INT_MAX){
            int chosenR = robberLocation.first, chosenC = robberLocation.second;
            for (int i = 0; i < 4; i++){
                int nr = robberLocation.first + move[i][0], nc = robberLocation.second + move[i][1];
                if (isCellInBounds({nr,nc})){
                    if (abs(nr-nearestBlock.first)+abs(nc-nearestBlock.second) != nearestBlockDist-1) continue;
                    chosenR = nr; chosenC = nc;
                    if (gridData[nr][nc].second != EntityType::TERRORIST && gridData[nr][nc].second != EntityType::PLAYER){
                        updateCell(robberLocation, EntityType::EMPTY);
                    }
                    else if (gridData[nr][nc].second == EntityType::TERRORIST){
                        updateCell(robberLocation, EntityType::TERRORIST);
                    }
                    else if (gridData[nr][nc].second == EntityType::PLAYER){
                         updateCell(robberLocation, EntityType::PLAYER);
                    }
                    updateCell({chosenR,chosenC},EntityType::ROBBER);
                    break;
                }
            }

            if (nearestBlockDist-1 == 0){
                updateCell({chosenR,chosenC}, EntityType::EMPTY);
                respawnRobber();
            }
        }
        else { // if theres no more blocks left, the robber will move towards the player
            int chosenR = robberLocation.first, chosenC = robberLocation.second;
            std::pair<int,int> playerLocation = player->getLocation();
            int playerDist = abs(robberLocation.first-playerLocation.first)+abs(robberLocation.second-playerLocation.second);
            for (int i = 0; i < 4; i++){
                int nr = robberLocation.first + move[i][0], nc = robberLocation.second + move[i][1];
                if (isCellInBounds({nr,nc})){
                    if (gridData[nr][nc].second == EntityType::TERRORIST) continue;
                    if (gridData[nr][nc].second == EntityType::PLAYER) {
                        gameOverStatus = true; cause_of_death = "Cause of death: you touched the robber"; return;
                    }
                    if (abs(nr-playerLocation.first)+abs(nc-playerLocation.second) != playerDist-1) continue;
                    chosenR = nr; chosenC = nc; break;
                }
            }
            updateCell(robberLocation, EntityType::EMPTY); updateCell({chosenR,chosenC},EntityType::ROBBER);
        }
    }

    if (moveLoop[moveLoopIndex] == "T"){ // move terrorist
        std::pair<int,int> terroristLocation = terrorist->getLocation();
        std::pair<int,int> playerLocation = player->getLocation();
        int playerDist = abs(terroristLocation.first-playerLocation.first)+abs(terroristLocation.second-playerLocation.second);
        int chosenR = terroristLocation.first, chosenC = terroristLocation.second;
        for (int i = 0; i < 4; i++){
            int nr = terroristLocation.first + move[i][0], nc = terroristLocation.second + move[i][1];
            if (isCellInBounds({nr,nc})){
                if (gridData[nr][nc].second == EntityType::ROBBER || gridData[nr][nc].second == EntityType::GRASS || gridData[nr][nc].second == EntityType::WOOD || gridData[nr][nc].second == EntityType::COBBLESTONE || gridData[nr][nc].second == EntityType::CONCRETE) continue;
                if (gridData[nr][nc].second == EntityType::PLAYER){
                    gameOverStatus = true; cause_of_death = "Cause of death: you touched the terrorist"; return;
                }
                if (abs(nr-playerLocation.first)+abs(nc-playerLocation.second) != playerDist-1) continue;
                chosenR = nr; chosenC = nc; break;
            }
        }
        updateCell(terroristLocation, EntityType::EMPTY); updateCell({chosenR,chosenC},EntityType::TERRORIST);
    }

    setEnemyMoveSpeedInMilliseconds(std::max(150,(int)(enemyMoveSpeedInMilliseconds*0.95)));
    moveLoopIndex = (moveLoopIndex+1)%std::size(moveLoop);
}

void EntityFacade::respawnRobber(){
    std::vector<std::pair<int,int>> availableCellsOnEdgeOfGrid;
    for (int i = 0; i < NUM_OF_GRID_ROWS; i++){
        for (int j = 0; j < NUM_OF_GRID_COLUMNS; j++){
            if ((i == 0 || j == 0 || i == NUM_OF_GRID_ROWS-1 || j == NUM_OF_GRID_COLUMNS-1) && gridData[i][j].second != EntityType::TERRORIST && gridData[i][j].second != EntityType::PLAYER){
                availableCellsOnEdgeOfGrid.push_back({i,j});
            }
        }
    }
    std::random_device rd; std::mt19937 g(rd());
    std::shuffle(availableCellsOnEdgeOfGrid.begin(), availableCellsOnEdgeOfGrid.end(),g);
    updateCell(availableCellsOnEdgeOfGrid[0], EntityType::ROBBER);
}

void EntityFacade::respawnDisaster(){ // this is used in the rare case the robber or terrorist eats up all the disaster cells
    std::vector<std::pair<int,int>> emptyCellsOnEdgeOfGrid;
    for (int i = 0; i < NUM_OF_GRID_ROWS; i++){
        for (int j = 0; j < NUM_OF_GRID_COLUMNS; j++){
            if ((i == 0 || j == 0 || i == NUM_OF_GRID_ROWS-1 || j == NUM_OF_GRID_COLUMNS-1) && gridData[i][j].second == EntityType::EMPTY){
                emptyCellsOnEdgeOfGrid.push_back({i,j});
                hadDisaster[i][j] = false;
            }
        }
    }
    std::random_device rd; std::mt19937 g(rd());
    std::shuffle(emptyCellsOnEdgeOfGrid.begin(), emptyCellsOnEdgeOfGrid.end(),g);
    // there is guaranteed to be >= 1 available cells due to: the budget, cost of the minimum block type, number of persons on the grid, and number of cells on the edge of grid
    updateCell({emptyCellsOnEdgeOfGrid[0]}, disasterType);
    hadDisaster[emptyCellsOnEdgeOfGrid[0].first][emptyCellsOnEdgeOfGrid[0].second] = true;
}

bool EntityFacade::gameOver(){ return gameOverStatus; }
std::string EntityFacade::getCauseOfDeath(){ return cause_of_death; }
/*******************************************************************************************************
**************************************** End of EntityFacade *******************************************
*******************************************************************************************************/



/*******************************************************************************************************
************ Start of HighscoresSingleton (Stores and Manages all highscores) **************************
*******************************************************************************************************/
HighscoresSingleton::HighscoresSingleton(){
    std::cout << "HighscoresSingleton instance created" << std::endl;
}

HighscoresSingleton* HighscoresSingleton::getInstance(){
    if (instance == nullptr){
        instance = new HighscoresSingleton();
    }
    return instance;
}

void HighscoresSingleton::updateHighscore(double survivalTimeInSeconds, EntityType disasterType){
    /* Highscores csv file layout
     *
     * Flood,maxFloodSurvivalTime
     * Wildfire,maxWildfireSurvivalTime
     * Tornado,maxTornadoSurvivalTime
     *
     * */
    EntityType row_type[3] = {EntityType::FLOOD, EntityType::WILDFIRE, EntityType::TORNADO};

    QFile highscoresReadFile(HighscoresSingleton::HIGHSCORES_RELATIVE_FILE_PATH);
    if (!highscoresReadFile.open(QIODevice::ReadOnly | QIODevice::Text)) { std::cerr << "Could not open highscores.csv file for reading!" << std::endl; return; }
    std::string highscoresTableData[3][2];
    QTextStream in(&highscoresReadFile);
    for (int i = 0; i < 3; i++) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        for (int j = 0; j < 2; j++){
            highscoresTableData[i][j] = fields[j].toStdString();
        }
    }
    highscoresReadFile.close();

    for (int i = 0; i < 3; i++){
        if (row_type[i] != disasterType) continue;
        double cmpSurvivalTime = std::stod(highscoresTableData[i][1]);
        if (survivalTimeInSeconds > cmpSurvivalTime){
            highscoresTableData[i][1] = std::to_string(survivalTimeInSeconds);
        }
    }

    QFile highscoresWriteFile(HighscoresSingleton::HIGHSCORES_RELATIVE_FILE_PATH);
    if (!highscoresWriteFile.open(QIODevice::WriteOnly | QIODevice::Text)) { std::cerr << "Could not open highscores.csv file for writing!" << std::endl; return; }
    QTextStream out(&highscoresWriteFile);
    for (int i = 0; i < 3; i++){
        QStringList fields;
        for (int j = 0; j < 2; j++){
            fields.append(QString::fromStdString(highscoresTableData[i][j]));
        }
        out << fields.join(",") << "\n";
    }
    highscoresWriteFile.close();
}

void HighscoresSingleton::clearHighscores(){
    std::string highscoresTableData[3][2] = {{"Flood","-1"},{"Wildfire","-1"},{"Tornado","-1"}};
    QFile highscoresWriteFile(HighscoresSingleton::HIGHSCORES_RELATIVE_FILE_PATH);
    if (!highscoresWriteFile.open(QIODevice::WriteOnly | QIODevice::Text)) { std::cerr << "Could not open highscores.csv file for writing!" << std::endl; return; }
    QTextStream out(&highscoresWriteFile);
    for (int i = 0; i < 3; i++){
        QStringList fields;
        for (int j = 0; j < 2; j++){
            fields.append(QString::fromStdString(highscoresTableData[i][j]));
        }
        out << fields.join(",") << "\n";
    }
    highscoresWriteFile.close();
}

void HighscoresSingleton::addRun(double survivalTimeInSeconds, EntityType disasterType, std::string cause_of_death){
    /* Run Log csv entry layout
     *
     * Disaster Type, Survival Time, Cause of Death
     *
     * */

    QFile runAppendFile(HighscoresSingleton::RUN_LOG_RELATIVE_FILE_PATH);
    if (!runAppendFile.open(QIODevice::Append | QIODevice::Text)) { std::cerr << "Could not open run_log.csv file for appending!" << std::endl; return; }
    QTextStream runAppend(&runAppendFile);
    QStringList fields;
    if (disasterType == EntityType::FLOOD) fields.append("Flood");
    else if (disasterType == EntityType::WILDFIRE) fields.append("Wildfire");
    else if (disasterType == EntityType::TORNADO) fields.append("Tornado");
    else fields.append("Unknown");
    fields.append(QString::fromStdString(std::to_string(survivalTimeInSeconds)));
    fields.append(QString::fromStdString(cause_of_death));
    runAppend << fields.join(",") << "\n";
    runAppendFile.close();
}

void HighscoresSingleton::clearRunLog(){
    QFile runWriteFile(HighscoresSingleton::RUN_LOG_RELATIVE_FILE_PATH);
    if (!runWriteFile.open(QIODevice::WriteOnly | QIODevice::Text)) { std::cerr << "Could not open run_log.csv file for writing!" << std::endl; return; }
    runWriteFile.close();
}

/*******************************************************************************************************
************************************ End of HighscoresSingleton ****************************************
*******************************************************************************************************/


