#pragma once

class Vehicle {
public:
	Vehicle(double petrol_consumption, double tank_volume);

	double getTankVolume() const;
	double getPetrolAmount() const;
	virtual void arrive();
	virtual bool leave();

private:
	double petrol_consumption;
	double petrol_amount = 0;
	double tank_volume;
};