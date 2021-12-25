#include"cars.h"
class Mitsubishi :
	public cars
{
private:
	string body_type;
public:
	Mitsubishi(string, int, string, string);
	virtual double engine_power();
	string get_body_type() const;
};

