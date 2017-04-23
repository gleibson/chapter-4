//Using pointers to string
#include<iostream>
#include<string>

int main()
{
	char animal[20] = "bear"; //array of string 
	const char *bird = "wren"; //holds address of string
	char *ps; 
	
	std::cout << animal << " and "; //display bear    
	std::cout << bird << std::endl; //display wren
	// std::cout << ps << std::endl;   may display garbage may cause crash

	std::cout << "Enter kind animal: ";
	std::cin >> animal;        //input to the animal array of char[20] 
    
	ps = animal;  //set a point to string 
	std::cout << ps << std::endl; //display animal 
	std::cout << "Before using strcpy(): ";
	std::cout << animal << " at " << (int *)animal << std::endl;
	std::cout << ps << " at " << (int *)ps << std::endl;

	ps = new char[strlen(animal) + 1]; // get a new storage from the heap
	strcpy(ps, animal); //copy string ps and animal to the storage

	std::cout << "After using strcpy() : " << std::endl;
	std::cout << animal << " at " << (int*)ps << std::endl;
	std::cout << ps << " at " << (int*) animal << std::endl;
	delete [] ps;

	return 0;
}