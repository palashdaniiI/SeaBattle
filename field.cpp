#include "field.h"

void Field::PrintField() const {
	for (int x = 0; x < 10; ++x) {
		for (int y = 0; y < 10; ++y) {
			ShipField[x][y].PrintCage();
		}
		std::cout << "\n";
	}
}
void Field::FillCage(int _x, int _y) {	
	ShipField[_x][_y].ChangeStatus("ACTIVE");
}
void Field::StrikeCage(int _x, int _y) {
	ShipField[_x][_y].ChangeStatus("DESTROYED");
}
