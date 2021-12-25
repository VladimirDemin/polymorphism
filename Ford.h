#include"cars.h"
class Ford :
	public cars
{
private:
	int max_speed;
public:
	Ford(string, int, string, int);
	virtual double engine_power();
	int get_max_speed() const;
};

