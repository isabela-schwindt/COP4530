#include "OutfitRotationService.h"

void OutfitRotationService::addOutfit(string name,
                                      string occasion,
                                      string weatherType) {
    Outfit outfit(name, occasion, weatherType);
    outfitRotation.insert(outfit);
}

void OutfitRotationService::removeCurrentOutfit() {
    outfitRotation.removeCurrent();
}

void OutfitRotationService::nextOutfit() {
    outfitRotation.moveToNext();
}

void OutfitRotationService::showCurrentOutfit() const {
    outfitRotation.getCurrent().display();
}

void OutfitRotationService::displayAllOutfits() const {
    outfitRotation.displayAll();
}

bool OutfitRotationService::isEmpty() const {
    return outfitRotation.isEmpty();
}
