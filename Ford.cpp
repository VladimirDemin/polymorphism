#include "Ford.h"
Ford::Ford(string car_model, int year_of_release, string country_of_origin, int new_max_speed) :cars{ car_model, year_of_release,  country_of_origin }
{
	max_speed = new_max_speed;
	if (max_speed > 435)
	{
		throw exception("max_speed of this car can't be higher than world record.");
	}
}
double Ford::engine_power()
{
	int number_orbits = 5100;
	int torque = 344;
	return (number_orbits * torque * 1.36) / 9549;
}
int Ford::get_max_speed() const
{
	return max_speed;
}