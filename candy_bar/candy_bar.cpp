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
		350,
	};

	std::cout << "The name of the snack: " << snack.brand << std::endl;
	std::cout << "The wheight of the snack: " << snack.wheight << std::endl;
    std::cout << "The calories of the snack: " << snack.calories << std::endl;

	return 0;
}