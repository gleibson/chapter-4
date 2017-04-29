#include<iostream>
#include<string>

int main()
{

	std::string first;
	std::string last;
	

	std::cout << "Enter your first name: ";
	getline(std::cin, first);
	std::cout << "Enter your last name: ";
	getline(std::cin, last);
    
	std::cout << "Here's the information in a single string: " << last << ", " << first << std::endl;

	return 0;

}