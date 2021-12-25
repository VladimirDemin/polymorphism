#include"cars.h"
class BMW:
	public cars
{
private:
	double engine_capacity;
	
public:
	BMW(string, int, string, double);
	virtual double engine_power();
	double get_engine_capacity() const;
};

