#include<iostream>
#include<cstring>

struct candy_bar
{
	char brand[20] = {};
	float wheight;
	int calories;

};

int main()
{
	candy_bar *pc = new candy_bar[3];

	strcpy(pc->brand, "Chocolate 1");
	pc->wheight = 1.3f;
	pc->calories = 345;


	strcpy((pc + 1) ->brand, "Chocolate 2");
	(pc + 1)->wheight = 1.8f;
	(pc + 1)->calories = 456;

	strcpy((pc + 2)->brand, "Chocolate 3");
	(pc + 2)->wheight = 2.3f;
	(pc + 2)->calories = 602;

	std::cout << "First candy bar name: " << pc[0].brand << " wheight is " << pc[0].wheight << " calories is " << pc[0].calories << std::endl;
	std::cout << "Second candy bar name: " << pc[1].brand << " wheight is " << pc[1].wheight << " calories is " << pc[1].calories << std::endl;
	std::cout << "Third candy bar name: " << pc[2].brand << " wheight is " << pc[2].wheight << " calories is " << pc[2].calories << std::endl;

    delete[]pc;
	return 0;
	
}