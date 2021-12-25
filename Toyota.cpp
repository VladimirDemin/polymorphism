#include "Toyota.h"
Toyota::Toyota(string car_model, int year_of_release, string country_of_origin) :cars{ car_model, year_of_release,  country_of_origin }
{
	
}
double Toyota::engine_power()
{
	int number_orbits = 6000;
	int torque = 170;
	return (number_orbits * torque * 1.36) / 9549;
}