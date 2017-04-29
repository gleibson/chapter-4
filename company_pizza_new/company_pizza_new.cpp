#include<iostream>
#include<string>

struct pizza_analyzis
{
	std::string brand;
	float diameter;
	float wheight;
};

int main()

{
	pizza_analyzis *pa = new pizza_analyzis;

	std::cout << "Enter the diameter of the pizza: ";
	std::cin >> pa->diameter;
	std::cin.get();

	std::cout << "Enter the name of the company: ";
	getline(std::cin, pa->brand);
	
	std::cout << "Enter the wheight of the pizza: ";
	std::cin >> pa->wheight;
	
	std::cout << std::endl;

	std::cout << "The diameter of the pizza: " << pa->diameter << std::endl;
	std::cout << "The name of the company: " << pa->brand << std::endl;
	std::cout << "The wheight of the pizza: " << pa->wheight << std::endl;


	return 0;

}