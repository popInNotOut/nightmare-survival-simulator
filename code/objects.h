#ifndef OBJECTS_H
#define OBJECTS_H

#include <string>
#include <vector>

// This file uses:
// - Factory creational pattern (for creating blocks, persons, and disasters)
// - Facade structural pattern (combining the three subsystems to provide a simple and useful interface for the ui classes to use)

/*******************************************************************************************************
************************ Start of Block Objects (Including BlockFactory) *******************************
*******************************************************************************************************/
enum class BlockType {GRASS, WOOD, COBBLESTONE, CONCRETE};

class Block {
public:
    virtual void print() = 0;
    virtual ~Block(){}
};

class GrassBlock : public Block {
public:
    inline static const std::string GRASS_BLOCK_IMG_RELATIVE_FILE_PATH = ":/img/img/grassBlock.png";
    static const int GRASS_BLOCK_COST = 5;
    void print() override;
};

class WoodBlock : public Block {
public:
    inline static const std::string WOOD_BLOCK_IMG_RELATIVE_FILE_PATH = ":/img/img/woodBlock.png";
    static const int WOOD_BLOCK_COST = 10;
    void print() override;
};

class CobblestoneBlock : public Block {
public:
    inline static const std::string COBBLESTONE_BLOCK_IMG_RELATIVE_FILE_PATH = ":/img/img/cobblestoneBlock.png";
    static const int COBBLESTONE_BLOCK_COST = 15;
    void print() override;
};

class ConcreteBlock : public Block {
public:
    inline static const std::string CONCRETE_BLOCK_IMG_RELATIVE_FILE_PATH = ":/img/img/concreteBlock.png";
    static const int CONCRETE_BLOCK_COST = 20;
    void print() override;
};

class BlockFactory {
public:
    Block* createBlock(BlockType type);
};
/*******************************************************************************************************
********************************** End of Block Objects ************************************************
*******************************************************************************************************/



/*******************************************************************************************************
************************ Start of Person Objects (Including PersonFactory) ******************************
*******************************************************************************************************/
enum class PersonType {PLAYER, ROBBER, TERRORIST};

class Person {
protected:
    std::pair<int,int> location;
public:
    virtual void print() = 0;
    virtual void setLocation(std::pair<int,int>) = 0;
    virtual std::pair<int,int> getLocation() = 0;
    virtual ~Person(){}
};

class Player : public Person {
public:
    inline static const std::string PLAYER_IMG_RELATIVE_FILE_PATH = ":/img/img/player.png";
    void print() override;
    void setLocation(std::pair<int,int>) override;
    std::pair<int,int> getLocation() override;
};

class Robber : public Person {
public:
    inline static const std::string ROBBER_IMG_RELATIVE_FILE_PATH = ":/img/img/robber.jpg";
    void print() override;
    void setLocation(std::pair<int,int>) override;
    std::pair<int,int> getLocation() override;
};

class Terrorist : public Person {
public:
    inline static const std::string TERRORIST_IMG_RELATIVE_FILE_PATH = ":/img/img/terrorist.jpg";
    void print() override;
    void setLocation(std::pair<int,int>) override;
    std::pair<int,int> getLocation() override;
};

class PersonFactory {
public:
    Person* createPerson(PersonType type);
};
/*******************************************************************************************************
********************************** End of Person Objects ***********************************************
*******************************************************************************************************/



/*******************************************************************************************************
********************** Start of Disaster Objects (Including DisasterFactory) ***************************
*******************************************************************************************************/
enum class DisasterType {FLOOD, WILDFIRE, TORNADO};

class Disaster {
public:
    virtual void print() = 0;
    virtual std::vector<std::pair<int,int>> disperse(std::pair<int,int> p) = 0; // return candidate cells for the disaster on the current cell to disperse into
    virtual ~Disaster(){}
};

class Flood : public Disaster {
public:
    inline static const std::string FLOOD_IMG_RELATIVE_FILE_PATH = ":/img/img/flood.jpg";
    void print() override;
    std::vector<std::pair<int,int>> disperse(std::pair<int,int> p) override;
};

class Wildfire : public Disaster {
public:
    inline static const std::string WILDFIRE_IMG_RELATIVE_FILE_PATH = ":/img/img/wildfire.jpg";
    void print() override;
    std::vector<std::pair<int,int>> disperse(std::pair<int,int> p) override;
};

class Tornado : public Disaster {
public:
    inline static const std::string TORNADO_IMG_RELATIVE_FILE_PATH = ":/img/img/tornado.jpg";
    void print() override;
    std::vector<std::pair<int,int>> disperse(std::pair<int,int> p) override;
};

class DisasterFactory {
public:
    Disaster* createDisaster(DisasterType type);
};
/*******************************************************************************************************
********************************** End of Disaster Objects *********************************************
*******************************************************************************************************/



/*******************************************************************************************************
*********** Start of EntityFacade (Provides a simplified interface to manage all subsystems) ***********
*******************************************************************************************************/
enum class EntityType {GRASS, WOOD, COBBLESTONE, CONCRETE, PLAYER, ROBBER, TERRORIST, FLOOD, WILDFIRE, TORNADO, EMPTY};

class EntityFacade {
public:
    static const int NUM_OF_GRID_ROWS = 15, NUM_OF_GRID_COLUMNS = 15;
private:
    inline static std::string moveLoop[10]{"D, R, R, R, R, R, R, T, T, T"}; // D - Disaster Move, R - Robber Move, T - Terrorist Move
    int moveLoopIndex = 0, budget = 100;
    BlockFactory blockFactory; PersonFactory personFactory; DisasterFactory disasterFactory;
    std::pair<void*,EntityType> gridData[NUM_OF_GRID_ROWS][NUM_OF_GRID_COLUMNS];
public:
    void initBuildingPhase();
    void updateCell(std::pair<int,int> location, EntityType type);
    EntityType getEntityAtCell(std::pair<int,int> location);
    bool isCellEmpty(std::pair<int,int> location);
    void setBudget(int newBudget);
    int getBudget();
};
/*******************************************************************************************************
********************************** End of EntityFacade *************************************************
*******************************************************************************************************/
#endif // OBJECTS_H
