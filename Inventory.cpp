#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory(int capacity) : items(new Item[capacity]), capacity(capacity), itemCount(0) {

}
Inventory::~Inventory() {
    cout << "Inventory has been destroyed" << endl;
    delete[] items;
}
bool Inventory::addItem(const Item& item) {
    if (itemCount < capacity) {
        items[itemCount] = item;
        Item::incrementTotalItems();
        cout << "An item was added: " << item.getName() << endl;
        cout << "--> Hero found [" << item.getName() << "] (Value: " << item.getValue() << ")" << endl;
        itemCount++;
        return true;
    }
    else {
        cout << "Full capacity met, cannot add item" << endl;
        return false;
    }
}
void Inventory::display() const {
    cout << "Inventory: " << itemCount << "/" << capacity << endl;
    for (int i = 0; i < itemCount;i++ ) {
        cout << "    [" << items[i].getName() << "] (Value: " << items[i].getValue() << ")" << endl;
    }
}