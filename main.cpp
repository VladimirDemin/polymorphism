#include"cars.h"
#include"Toyota.h"
#include"Mitsubishi.h"
#include"Ford.h"
#include"Volkswagen.h"
#include"BMW.h"
int main()
{
	vector <cars*> cars;
	cars.push_back(new Toyota{ "Toyota Corolla", 2002, "Japan"});
	cars.push_back(new Mitsubishi{ "Mitsubishi Outlander", 2011, "Japan", "Crossover"});
	cars.push_back(new Ford{ "Ford Explorer", 2003, "USA", 158});
	cars.push_back(new Volkswagen{ "Volkswagen Golf Plus", 2011 , "Germany", 1314});
	cars.push_back(new BMW{ "BMW X5", 2002, "Germany", 4.4});
	for (auto& x : cars)
	{
		cout << "The engine power of " << x->get_Name() << " is " << x->engine_power() << " horse power. "<<endl;
	}
}