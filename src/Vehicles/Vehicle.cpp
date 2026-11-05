#include "Vehicle.h"

Vehicle::Vehicle(double petrol_consumption, double tank_volume) : petrol_consumption(petrol_consumption), tank_volume(tank_volume) {

}

double Vehicle::getTankVolume() const {
	return tank_volume;
}

double Vehicle::getPetrolAmount() const {
	return petrol_amount;
}


