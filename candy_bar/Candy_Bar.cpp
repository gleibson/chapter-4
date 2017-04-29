#include<iostream>
#include<string>

struct candy_bar
{
	std::string brand;
	float wheight;
	int calories;

};

int main()
{

	candy_bar snack
	{
		"Mocha Munch",
			2.3,
			350
	};

	
	std::cout << "Brand of Snack: " << snack.brand << std::endl;
	std::cout << "Wheight of Snack: " << snack.wheight << std::endl;
	std::cout << "Calories of Snack: " << snack.calories << std::endl;

	return 0;
}