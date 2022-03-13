#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>

class Cage {
public:	
	Cage();
	void ChangeStatus(std::string _st); //receives status name
	void PrintCage() const; //printing status of the cage
private:	
	std::string local_status; //status of the cage: INIT (initiated), ACTIVE or DESTROYED 
};