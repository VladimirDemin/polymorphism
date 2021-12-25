#include"cars.h"
class Volkswagen :
	public cars
{
private:
	int weight;
	
public:
	Volkswagen(string, int, string, int);
	int get_weight() const;
	virtual double engine_power();
};

