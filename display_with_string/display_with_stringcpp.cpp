#include<iostream>
#include<string>

int main()
{
	std::string name;
	std::string name1;
	char grade;
	int age;


	std::cout << "What is your first name? ";
	std::getline(std::cin, name);
	std::cout << "What is your last name? ";
	std::getline(std::cin, name1);
	std::cout << "What letter grade do you deserve? ";
	std::cin >> grade;
	std::cout << "What is your age? ";
	std::cin >> age;

	std::cout << "Name: " << name1 << ", " << name << std::endl;
	std::cout << "Grade: " << char(grade - 1) << std::endl;
	std::cout << "Age: " << age << std::endl;

	return 0;

}