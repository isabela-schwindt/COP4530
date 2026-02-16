#include "PackingItem.h"
#include <iostream>
using namespace std;

// Default constructor
PackingItem::PackingItem()
    : itemName(""), category(""), weight(0.0), isPacked(false) {}

// Parameterized constructor
PackingItem::PackingItem(string name, string category, double weight)
    : itemName(name), category(category), weight(weight), isPacked(false) {}

// Getters
string PackingItem::getItemName() const {
    return itemName;
}

string PackingItem::getCategory() const {
    return category;
}

double PackingItem::getWeight() const {
    return weight;
}

bool PackingItem::getIsPacked() const {
    return isPacked;
}

// Mark item as packed
void PackingItem::markAsPacked() {
    isPacked = true;
}

// Display item information
void PackingItem::display() const {
    cout << "Item: " << itemName
         << " | Category: " << category
         << " | Weight: " << weight
         << "kg | Packed: " << (isPacked ? "Yes" : "No")
         << endl;
}
