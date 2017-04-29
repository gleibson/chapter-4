#include<iostream>
#include<string>

struct pizza
{
	std::string name_company;
	float diameter;
	float wheight;

};

int main()
{
	pizza pizza_analysis;

	std::cout << "What is the name of the company? ";
	getline(std::cin, pizza_analysis.name_company);
	std::cout << "What is the diameter of the pizza? ";
	std::cin >> pizza_analysis.diameter;
	std::cout << "What is the wheight of the pizza? ";
	std::cin >> pizza_analysis.wheight;
	std::cout << std::endl;
	
	std::cout << "The name of the company: " << pizza_analysis.name_company << std::endl ;
	std::cout << "The diameter of the pizza: " << pizza_analysis.diameter << std::endl;
	std::cout << "The wheight of the pizza: " << pizza_analysis.wheight << std::endl;
	
	return 0;
}