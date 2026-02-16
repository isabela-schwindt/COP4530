#include "PackingService.h"

// Add new packing item
void PackingService::addItem(string name,
                             string category,
                             double weight) {
    PackingItem item(name, category, weight);
    packingList.insertAtEnd(item);
}

// Remove item by name
void PackingService::removeItem(string name) {
    packingList.removeByValue(name); 
    // NOTE: Student A must support remove by matching name
}

// Mark item as packed
void PackingService::markItemPacked(string name) {
    packingList.markItem(name);
    // Requires Student A helper or traversal
}

// Display packing list
void PackingService::displayPackingList() const {
    packingList.display();
}

int PackingService::getTotalItems() const {
    return packingList.size();
}

void PackingService::clearPackingList() {
    packingList.clear();
}
