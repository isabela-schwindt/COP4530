#include "TripHistoryService.h"

void TripHistoryService::addTrip(string destination,
                                 string startDate,
                                 string endDate,
                                 int totalItemsPacked) {
    TripRecord trip(destination, startDate, endDate, totalItemsPacked);
    tripHistory.insertAtEnd(trip);
}

void TripHistoryService::removeLastTrip() {
    tripHistory.removeLast();
}

void TripHistoryService::displayTripsForward() const {
    tripHistory.displayForward();
}

void TripHistoryService::displayTripsBackward() const {
    tripHistory.displayBackward();
}

bool TripHistoryService::isEmpty() const {
    return tripHistory.isEmpty();
}
