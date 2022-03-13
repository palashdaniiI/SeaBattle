#pragma once

#include "cage.h"

class Field {
public:	
	void PrintField() const; 
	void FillCage(int _x, int _y); //change cage status to ACTIVE (receives coordinates)
	void StrikeCage(int _x, int _y); //change cage status to DESTROYED (receives coordinates)
private:
	Cage ShipField[10][10]; //creating field of the sea batle
};