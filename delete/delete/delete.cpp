//delete.cpp Using the delete operator
#include<iostream>
#include<iostream>

char *getname(void); //Prototype


int main()
{
	char * name;

	name = getname();

	std::cout << name << " at " << (int*)name << std::endl;
	delete[] name;

	name = getname();
	std::cout << name << " at " << (int*)name << std::endl;
	delete[] name;
	return 0;

}

char *getname()
{


	char temp[80];
	std::cout << "Enter last name: ";
	std::cin >> temp;
	char *pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;

}
