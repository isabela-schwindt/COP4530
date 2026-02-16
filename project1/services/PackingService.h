// PackingService.h
// Provides high-level operations for managing packing items.
// Uses SinglyLinkedList<PackingItem> internally.
// Contains business logic related to adding, removing,
// and marking items as packed.

#ifndef PACKINGSERVICE_H
#define PACKINGSERVICE_H

#include "../structures/SinglyLinkedList.h"
#include "../domain/PackingItem.h"

class PackingService {
private:
    SinglyLinkedList<PackingItem> packingList;

public:
    void addItem(string name, string category, double weight);
    void removeItem(string name);
    void markItemPacked(string name);
    void displayPackingList() const;
    int getTotalItems() const;
    void clearPackingList();
};

#endif
