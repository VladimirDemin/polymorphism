#include "Volkswagen.h"
Volkswagen::Volkswagen(string car_model, int year_of_release, string country_of_origin, int new_weight) :cars{ car_model, year_of_release,  country_of_origin } 
{
	weight = new_weight;
	if (weight < 60)
	{
		throw exception("weight of the car can't be so low.");
	}
}
double Volkswagen::engine_power()
{
	int number_orbits = 4400;
	int torque = 250;
	return (number_orbits * torque * 1.36) / 9549;
}
int Volkswagen::get_weight() const
{
	return weight;
}