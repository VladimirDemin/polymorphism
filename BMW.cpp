#include "BMW.h"
BMW::BMW(string car_model, int year_of_release, string country_of_origin, double new_engine_capacity) :cars{ car_model, year_of_release,country_of_origin}
{
	engine_capacity = new_engine_capacity;
}
double BMW::engine_power()
{
	int number_orbits = 5500;
	int torque = 600;
	return (number_orbits*torque*1.36)/9549 ;
}
double BMW::get_engine_capacity() const
{
	return engine_capacity;
}