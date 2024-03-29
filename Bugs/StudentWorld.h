#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include "Compiler.h"
#include <string>
#include <list>

// Students:  Add code to this file, StudentWorld.cpp, Actor.h, and Actor.cpp
class Actor;
class field;
class StudentWorld : public GameWorld
{
public:
	StudentWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual ~StudentWorld();

	virtual int init();

	virtual int move();

	virtual void cleanUp();

	bool checkpebble(int x, int y); 

	bool findwhatsthere(int x, int y, int ID);

	void updateTickCount();

	void setDisplayText();

	void resetmoved();

	void addFood(int x, int y, int health);

	void addActor(int x, int y, Actor* actor);

	void incre_n_ant_x(int col); //how does anthill identify?

	void decre_n_ant_x(int col);

	void emitPhero(int x, int y, int type);
	
	int getCurrentTicks() const; 

	int getNumberOfAntsForAnt(int input) const;

	int  getWinningAntNumber() const;

	bool isthisdangerou(int x, int y, int IDN);

	bool isthismyanthill(int x, int y, int IDN);

	bool enemyonthislocation(int x, int y, int IDN);

	bool foodonthislocation(int x, int y);

	bool isthereathingcanbebitten(int x, int y);

	bool isthelocationjumpable(int x, int y);

	Actor* actor(int x, int y, int ID);

	Actor* aRandthingcanbebitten(int x, int y);

	std::vector<Actor*> allcanbetrap(int x, int y);

	std::string displayFouritem(int ticks, int a0, int a1, int a2, int a3, int wa);

private:
	std::list<Actor*> actorobjhld[VIEW_WIDTH][VIEW_HEIGHT];
	Compiler *compilerForEntrant[4];
	int elaptick = 0;
	int n_ant[4];
	int n_ant_0 = 0;
	int n_ant_1 = 0;
	int n_ant_2 = 0;
	int n_ant_3 = 0;
	int n_player = 0;
	std::vector<std::string> fileNames;

};



#endif // STUDENTWORLD_H_
