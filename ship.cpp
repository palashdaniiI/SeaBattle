#include "ship.h"

Ship::Ship() : direction("right"), health(0) {}
Ship::Ship(int _health) : direction("right"), health(_health) {}
void Ship::SetDirection(std::string _dir) {
	direction = _dir;
}
void Ship::PutShip(int _x, int _y, Field& _MainField) { //receives coordinates and created field 
	int cnt = 0;		
	if (direction == "RIGHT") {		
		while (cnt++ < health) {
			_MainField.FillCage(_x, _y++);
		}
	}
	else if (direction == "DOWN") {		
		while (cnt++ < health) {
			_MainField.FillCage(_x++, _y);
		}
	}
	else if (direction == "LEFT") {		
		while (cnt++ < health) {
			_MainField.FillCage(_x, --_y);
		}
	}
	else if (direction == "UP") {		
		while (cnt++ < health) {
			_MainField.FillCage(--_x, _y);
		}
	}
}