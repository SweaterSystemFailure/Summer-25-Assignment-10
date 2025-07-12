#include "Item.h"

void Item::populateItem(std::string itemName, int itemQuantity, int itemSKU) {
	name = itemName;
	quantity = itemQuantity;
	sku = itemSKU;
	printItem();
}

void Item::printItem() {
	std::cout << "Product: " << name << ", On-Hand Quantity: " << quantity << ", SKU: " << sku << std::endl;
}