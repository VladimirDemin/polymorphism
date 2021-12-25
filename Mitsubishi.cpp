#include "Mitsubishi.h"
Mitsubishi::Mitsubishi(string car_model, int year_of_release, string country_of_origin, string new_body_type ) :cars{ car_model, year_of_release,  country_of_origin }
{
	body_type = new_body_type;
}
double Mitsubishi::engine_power()
{
	int number_orbits = 6250;
	int torque = 291;
	return (number_orbits * torque * 1.36) / 9549;
}
string Mitsubishi::get_body_type() const
{
	return body_type;
}