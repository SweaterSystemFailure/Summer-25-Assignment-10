#pragma once
#include <iostream>

class Item
{private:
	std::string name = "null";
	int quantity = 0;
	int sku = 0;
public:
	void populateItem(std::string name, int quantity, int sku);
	void printItem();
};