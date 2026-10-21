#include "Player.h"
#include "board.cpp"
#include "enums.h"

class TurnManager{

	Board board;
	std::unordered_map<PlayerColor, Player> players;
	int shipDice[5] = [0,1,2,2,3]; // DO NOT ALTER
	

}