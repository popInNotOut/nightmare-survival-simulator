#include "objects.h"
#include <iostream>

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
std::vector<std::pair<int,int>> Flood::disperse(std::pair<int,int> p){
    int r = p.first, c = p.second;
    std::vector<std::pair<int,int>> ret;
    ret.push_back({r-1,c}); ret.push_back({r+1,c}); ret.push_back({r,c-1}); ret.push_back({r,c+1});
    ret.push_back({r-1,c-1}); ret.push_back({r-1,c+1}); ret.push_back({r+1,c-1}); ret.push_back({r+1,c+1});
    return ret;
}

void Wildfire::print() { std::cout << "wildfire" << std::endl; }
std::vector<std::pair<int,int>> Wildfire::disperse(std::pair<int,int> p){
    int r = p.first, c = p.second;
    std::vector<std::pair<int,int>> ret;
    ret.push_back({r-1,c}); ret.push_back({r+1,c}); ret.push_back({r,c-1}); ret.push_back({r,c+1});
    return ret;
}

void Tornado::print() { std::cout << "tornado" << std::endl; }
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
    gridData[NUM_OF_GRID_ROWS/2][NUM_OF_GRID_COLUMNS/2] = {personFactory.createPerson(PersonType::PLAYER), EntityType::PLAYER};
}

void EntityFacade::updateCell(std::pair<int,int> location, EntityType entityType){
    int r = location.first, c = location.second;
    switch(entityType){
        case EntityType::GRASS:
            gridData[r][c] = {blockFactory.createBlock(BlockType::GRASS), EntityType::GRASS};
            break;
        case EntityType::WOOD:
            gridData[r][c] = {blockFactory.createBlock(BlockType::WOOD), EntityType::WOOD};
            break;
        case EntityType::COBBLESTONE:
            gridData[r][c] = {blockFactory.createBlock(BlockType::COBBLESTONE), EntityType::COBBLESTONE};
            break;
        case EntityType::CONCRETE:
            gridData[r][c] = {blockFactory.createBlock(BlockType::CONCRETE), EntityType::CONCRETE};
            break;
        case EntityType::PLAYER:
            gridData[r][c] = {personFactory.createPerson(PersonType::PLAYER), EntityType::PLAYER};
            break;
        case EntityType::ROBBER:
            gridData[r][c] = {personFactory.createPerson(PersonType::ROBBER), EntityType::ROBBER};
            break;
        case EntityType::TERRORIST:
            gridData[r][c] = {personFactory.createPerson(PersonType::TERRORIST), EntityType::TERRORIST};
            break;
        case EntityType::FLOOD:
            gridData[r][c] = {disasterFactory.createDisaster(DisasterType::FLOOD), EntityType::FLOOD};
            break;
        case EntityType::WILDFIRE:
            gridData[r][c] = {disasterFactory.createDisaster(DisasterType::WILDFIRE), EntityType::WILDFIRE};
            break;
        case EntityType::TORNADO:
            gridData[r][c] = {disasterFactory.createDisaster(DisasterType::TORNADO), EntityType::TORNADO};
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

bool EntityFacade::isCellEmpty(std::pair<int,int> location){
    int r = location.first, c = location.second;
    return gridData[r][c].second == EntityType::EMPTY;
}

void EntityFacade::setBudget(int v){ budget = v; }
int EntityFacade::getBudget(){ return budget; }
/*******************************************************************************************************
********************************** End of EntityFacade *************************************************
*******************************************************************************************************/


