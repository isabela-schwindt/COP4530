// TripHistoryService.h
// Manages past trip records.
// Uses DoublyLinkedList<TripRecord> internally.
// Allows navigation through previous trips.

#ifndef TRIPHISTORYSERVICE_H
#define TRIPHISTORYSERVICE_H

#include "../structures/DoublyLinkedList.h"
#include "../domain/TripRecord.h"

class TripHistoryService {
private:
    DoublyLinkedList<TripRecord> tripHistory;

public:
    void addTrip(string destination, string startDate, string endDate, int totalItemsPacked);
    void removeLastTrip();
    void displayTripsForward() const;
    void displayTripsBackward() const;
    bool isEmpty() const;
};

#endif
