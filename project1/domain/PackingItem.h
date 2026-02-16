// PackingItem.h
// Defines the PackingItem class.
// Represents an item that a user plans to pack for a trip.
// Used inside the SinglyLinkedList for current packing list management.

#ifndef PACKINGITEM_H
#define PACKINGITEM_H

#include <string>
using namespace std;

class PackingItem {
private:
    string itemName;
    string category;
    double weight;
    bool isPacked;

public:
    // Constructors
    PackingItem();
    PackingItem(string name, string category, double weight);

    // Getters
    string getItemName() const;
    string getCategory() const;
    double getWeight() const;
    bool getIsPacked() const;

    // Behavior
    void markAsPacked();
    void display() const;
};

#endif
