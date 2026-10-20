#include "npc.h"
#include <random>
// 


class GameData{



	GameData()
}


int rollDice(){
	thread_local std::random_device rd;
    thread_local std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, 6);
    // This is executed on every function call
    int first = distrib(gen);
    int second = distrib(gen);
    return first + second;
}
//Turn Manager