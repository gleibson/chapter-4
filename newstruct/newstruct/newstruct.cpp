//using new keyword with a structure
#include<iostream>

struct inflatabe
{
	char name[20];
	float volume;
	double price;
};



int main()
{ 
	inflatabe *ps= new inflatabe;
	std::cout << "Enter name of inflatable intem: ";
	std::cin.get(ps->name, 20);  //one method
	std::cout << "Enter volume in cubic feet: ";
	std::cin >> (*ps).volume;    //second method
	std::cout << "Enter prince: $";
	std::cin >> ps->price;
	std::cout << "Name: " << (*ps).name << std::endl;
	std::cout << "Volume: " << ps->volume << " cubic feet " << std::endl;
	std::cout << "Price: $" << ps->price << std::endl;
	delete ps;
	return 0;


}