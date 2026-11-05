#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
public:
	Bus(int people, int max_people, double petrol, double max_petrol);
	int getPeopleCount();
	int getMaxPeople();
private:

};