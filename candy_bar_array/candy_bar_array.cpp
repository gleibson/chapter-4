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
	candy_bar chocolate[3]
	
	{
		{"first ", 1.3, 400},
	    {"second ", 1.5, 410},
		{"third ", 1.7, 436}
	};


	std::cout << "First candy bar with name: " << chocolate[0].brand
		<< chocolate[0].wheight << " of wheight " << "and "
		<< chocolate[0].calories << " calories" << std::endl;

	std::cout << "Second candy bar with name: " << chocolate[1].brand
		<< chocolate[1].wheight << " of wheight " << "and "
		<< chocolate[1].calories << " calories" << std::endl ;

	std::cout << "Third candy bar with name: " << chocolate[2].brand
		<< chocolate[2].wheight << " of wheight " << "and "
		<< chocolate[2].calories << " calories" << std::endl;
     
	return 0;


}