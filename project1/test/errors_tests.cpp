#include <iostream>
#include "../services/PackingService.h"
#include "../services/TripHistoryService.h"
#include "../services/OutfitRotationService.h"

using namespace std;

void testPackingErrors() {
    cout << "\n=== Testing PackingService (Errors) ===\n";
    PackingService packing;

    // Remove non-existent item
    packing.removeItem("NonExistent");
    cout << "Attempted to remove non-existent item (should handle gracefully)\n";

    // Mark non-existent item as packed
    packing.markItemPacked("NonExistent");
    cout << "Attempted to mark non-existent item as packed (should handle gracefully)\n";

    // Clear empty list
    packing.clearPackingList();
    cout << "Cleared empty packing list (should not crash)\n";
}

void testTripHistoryErrors() {
    cout << "\n=== Testing TripHistoryService (Errors) ===\n";
    TripHistoryService trips;

    // Remove last trip from empty list
    trips.removeLastTrip();
    cout << "Attempted to remove last trip from empty list\n";

    // Display empty trip history
    trips.displayTripsForward();
    trips.displayTripsBackward();
}

void testOutfitRotationErrors() {
    cout << "\n=== Testing OutfitRotationService (Errors) ===\n";
    OutfitRotationService outfits;

    // Rotate empty rotation
    outfits.nextOutfit();
    cout << "Attempted next outfit on empty rotation\n";

    // Remove current outfit from empty rotation
    outfits.removeCurrentOutfit();
    cout << "Attempted to remove current outfit on empty rotation\n";

    // Display empty rotation
    outfits.displayAllOutfits();
}

int main() {
    cout << "=== ERRORS TESTS FOR TRAVEL PACKING ROTATION SYSTEM ===\n";

    testPackingErrors();
    testTripHistoryErrors();
    testOutfitRotationErrors();

    cout << "\n=== ERRORS TESTS COMPLETED ===\n";
    return 0;
}
