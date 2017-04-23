//point addition
#include <iostream>

int main()
{

	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3,2,1 };

	//here two ways to get the address of array
	double *pw = wages;
	short  *ps = &stacks[0];

	//with array element
	std::cout << "pw = " << pw << " pw = " << *pw << std::endl;
	pw = pw + 1;
	std::cout << "add 1 to the pw pointer: " << std::endl;
	std::cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

	std::cout << "ps = " << ps << ", *ps = " << *ps << std::endl;
	ps = ps + 1;
	std::cout << "add 1 to the ps pointer. \n";
	std::cout << "ps = " << ps << " , *ps = " << *ps << "\n\n";

	std::cout << "access two elements with array notation" << std::endl
		<< "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << std::endl;
	std::cout << "access two elements with pointer notation " << std::endl;
	std::cout << "*stacks =  " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << std::endl;

	std::cout << sizeof(wages) << " = size of wages array " << std::endl;
	std::cout << sizeof(stacks) << " = size of stacks array " << std::endl;

	return 0;

}