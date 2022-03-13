#include "cage.h"

Cage::Cage(): local_status("INIT") {} //Initializated
void Cage::ChangeStatus(std::string _st) {
	local_status = _st;
}
void Cage::PrintCage() const {
	if (local_status == "INIT")
		std::cout << " ~ ";
	else if (local_status == "ACTIVE")
		std::cout << " O ";
	else if (local_status == "DESTROYED")
		std::cout << " X ";
}