// Outfit.h
// Defines the Outfit class.
// Represents a clothing combination used for trip outfit rotation.
// Used inside the CircularLinkedList to rotate outfits daily.

#ifndef OUTFIT_H
#define OUTFIT_H

#include <string>
using namespace std;

class Outfit {
private:
    string outfitName;
    string occasion;
    string weatherType;

public:
    // Constructors
    Outfit();
    Outfit(string name, string occasion, string weatherType);

    // Getters
    string getOutfitName() const;
    string getOccasion() const;
    string getWeatherType() const;

    // Display
    void display() const;
};

#endif
