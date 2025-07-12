#include "Item.h"
#include <iostream>

int main()
{
	Item apples;
	Item bananas;
	Item peaches;

	std::cout << std::endl;
	apples.populateItem("Apples", 50, 6444351);
	bananas.populateItem("Bananas", 30, 5478352);
	peaches.populateItem("Peaches", 20, 9865345);

	return 0;
}
