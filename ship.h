#pragma once

#include "field.h"

class Ship {
public:
	Ship();
	Ship(int _health); //receives the amount of decks
	void PutShip(int _x, int _y, Field& _MainField); //put ship on the field
	void SetDirection(std::string _dir);	
	
private:
	std::string direction; //ship direction on the field
	int health; //deck count 	
};