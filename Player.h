#include "unit.h"

class Player{

	//Flags
	bool isHuman;

	//Them
	//sprites for small icon + full body icon
	std::string name;

	//What they have
	std::list<unit::Unit> units;
	float gold; // keep to xxxxx.xx
	int ownedTiles;
	int remainingColony;
	int remainingTradeStation;
	int remainingShips;
	std::unordered_map<ResourceType, int> cards;
	// Trait Sliders: 0.1 - 2.0
	float expanding; 
	float trading;
	float expansion;
	int shipDice[5] = [0,1,2,2,3];
	// 0 = Black, 1 = Blue, 2 = Yellow, 3 = Red



	Player(std::string name, float aggressive, float militarism, float expansion);

	void executeTurn();
	
}