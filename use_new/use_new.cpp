#include<iostream>

int main()
{

	int nights = 1001;
	int *pt = new int;
	*pt = 1001;

	std::cout << "nights value = ";
	std::cout << nights << " :location" << nights << std::endl;
	std::cout << "int ";
	std::cout << "value = " << *pt << ": location = " << pt << std::endl;

	double *pd = new double;
	*pd = 10000001.0;

	std::cout << "double "
		<< " value = " << *pd << " : location = " << pd << std::endl
		<< "location pointer pd: " << &pd << std::endl
		<< "size of pt = " << sizeof(pt) << std::endl
		<< "size of *pt = " << sizeof(*pt) << std::endl
		<< "size of pd = " << sizeof(pd) << std::endl
		<< "size of *pd = " << sizeof(*pd) << std::endl;

	return 0;

}