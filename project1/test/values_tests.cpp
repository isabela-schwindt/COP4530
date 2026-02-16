#include <iostream>
#include "../services/PackingService.h"
#include "../services/TripHistoryService.h"
#include "../services/OutfitRotationService.h"

using namespace std;

void testPackingService() {
    cout << "\n=== Testing PackingService (Values) ===\n";
    PackingService packing;

    // Add items
    packing.addItem("T-Shirt", "Clothing", 0.3);
    packing.addItem("Laptop", "Electronics", 2.5);
    packing.addItem("Toothbrush", "Toiletries", 0.1);

    cout << "Packing list after adding 3 items:\n";
    packing.displayPackingList();

    // Mark item as packed
    packing.markItemPacked("Laptop");
    cout << "\nAfter marking Laptop as packed:\n";
    packing.displayPackingList();

    // Remove an item
    packing.removeItem("Toothbrush");
    cout << "\nAfter removing Toothbrush:\n";
    packing.displayPackingList();

    // Total items
    cout << "\nTotal items in list (expected 2): " << packing.getTotalItems() << endl;

    // Clear packing list
    packing.clearPackingList();
    cout << "\nAfter clearing list, total items (expected 0): " << packing.getTotalItems() << endl;
}

void testTripHistoryService() {
    cout << "\n=== Testing TripHistoryService (Values) ===\n";
    TripHistoryService trips;

    // Add trips
    trips.addTrip("Paris", "2026-03-01", "2026-03-07", 5);
    trips.addTrip("Tokyo", "2026-04-10", "2026-04-15", 7);

    cout << "Trip history forward:\n";
    trips.displayTripsForward();

    cout << "\nTrip history backward:\n";
    trips.displayTripsBackward();

    // Remove last trip
    trips.removeLastTrip();
    cout << "\nAfter removing last trip, forward:\n";
    trips.displayTripsForward();
}

void testOutfitRotationService() {
    cout << "\n=== Testing OutfitRotationService (Values) ===\n";
    OutfitRotationService outfits;

    // Add outfits
    outfits.addOutfit("Casual Jeans", "Casual", "Mild");
    outfits.addOutfit("Formal Suit", "Business", "Cold");
    outfits.addOutfit("Beach Shorts", "Vacation", "Hot");

    cout << "All outfits:\n";
    outfits.displayAllOutfits();

    // Current outfit
    cout << "\nShow current outfit (expected Casual Jeans):\n";
    outfits.showCurrentOutfit();

    // Rotate
    outfits.nextOutfit();
    cout << "After next outfit (expected Formal Suit):\n";
    outfits.showCurrentOutfit();

    // Remove current outfit
    outfits.removeCurrentOutfit();
    cout << "After removing current outfit, all outfits:\n";
    outfits.displayAllOutfits();
}

int main() {
    cout << "=== VALUES TESTS FOR TRAVEL PACKING ROTATION SYSTEM ===\n";

    testPackingService();
    testTripHistoryService();
    testOutfitRotationService();

    cout << "\n=== VALUES TESTS COMPLETED ===\n";
    return 0;
}
