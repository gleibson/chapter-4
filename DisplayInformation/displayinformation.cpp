#include<iostream>

int main()
{
	char information[20] = {};
	char information1[20] = {};
	char grade;
	int age;



	std::cout << "What is your first name? " ;
	std::cin.getline(information, 20);
	std::cout << "What is your last name? " ;
	std::cin.getline(information1, 20);
	std::cout << "Whats letter grade do you deserve? " ;
	std::cin >> grade;
	std::cout << "What is your age? ";
	std::cin >> age;
	
	std::cout << "Name: " << information1 << ", " << information << std::endl;
	std::cout << "Grade: " << char ( grade + 1 ) << std::endl;
	std::cout << "Age: " << age << std::endl;
 
	return 0;



}