#include "cars.h"

cars::cars(string car_model, int year_of_release, string country_of_origin)
{
	Name = car_model;
	year = year_of_release;
	country = country_of_origin;
}

string cars::get_Name() const 
{
	return Name;
}
int cars::get_year() const
{
	return year;
}
string cars::get_country() const
{
	return country;
}

