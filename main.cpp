#include "ship.h"

int main() {		
	Field MainField;
	MainField.PrintField();	//show corrent field
	std::cout << "           \n";
	Ship fleet[10] = { 1, 1, 1, 1, 2, 2, 2, 3, 3, 4 }; // 0..3 = "1", 4..6 = "2", 7..8 = "3, 9 = "4" 
	fleet[0].SetDirection("RIGHT"); //setting direction of the chosen ship
	fleet[0].PutShip(0, 0, MainField); //putting ship on the coordinates of the chosen field
	fleet[9].SetDirection("LEFT");
	fleet[9].PutShip(4, 4, MainField);
	MainField.PrintField();
	std::cout << "           \n";	
	MainField.StrikeCage(0, 0); //strike chosen coordinates
	MainField.StrikeCage(4, 2);
	MainField.StrikeCage(0, 0);
	MainField.PrintField();	
	std::cout << "           \n";
	return 0;
}
