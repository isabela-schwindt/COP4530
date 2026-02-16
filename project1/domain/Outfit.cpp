#include "Outfit.h"
#include <iostream>
using namespace std;

Outfit::Outfit()
    : outfitName(""), occasion(""), weatherType("") {}

Outfit::Outfit(string name,
               string occasion,
               string weatherType)
    : outfitName(name),
      occasion(occasion),
      weatherType(weatherType) {}

string Outfit::getOutfitName() const {
    return outfitName;
}

string Outfit::getOccasion() const {
    return occasion;
}

string Outfit::getWeatherType() const {
    return weatherType;
}

void Outfit::display() const {
    cout << "Outfit: " << outfitName
         << " | Occasion: " << occasion
         << " | Weather: " << weatherType
         << endl;
}
