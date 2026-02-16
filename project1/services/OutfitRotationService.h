// OutfitRotationService.h
// Manages daily outfit rotation.
// Uses CircularLinkedList<Outfit> internally.
// Allows cycling through outfits repeatedly.

#ifndef OUTFITROTATIONSERVICE_H
#define OUTFITROTATIONSERVICE_H

#include "../structures/CircularLinkedList.h"
#include "../domain/Outfit.h"

class OutfitRotationService {
private:
    CircularLinkedList<Outfit> outfitRotation;

public:
    void addOutfit(string name, string occasion, string weatherType);
    void removeCurrentOutfit();
    void nextOutfit();
    void showCurrentOutfit() const;
    void displayAllOutfits() const;
    bool isEmpty() const;
};

#endif
