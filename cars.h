#pragma once
#include<iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;
class cars
{
private:
	string Name;
	int year;
	string country;
	int number_orbits;
	int torque;
public:
	cars(string, int, string);
	virtual ~cars() {};
	string get_Name() const;
	int get_year() const;
	string get_country() const;
	virtual double engine_power()=0;
};

