// TripRecord.h
// Defines the TripRecord class.
// Represents a completed trip and its associated packing summary.
// Used inside the DoublyLinkedList for trip history navigation.

#ifndef TRIPRECORD_H
#define TRIPRECORD_H

#include <string>
using namespace std;

class TripRecord {
private:
    string destination;
    string startDate;
    string endDate;
    int totalItemsPacked;

public:
    // Constructors
    TripRecord();
    TripRecord(string destination, string startDate, string endDate, int totalItemsPacked);

    // Getters
    string getDestination() const;
    string getStartDate() const;
    string getEndDate() const;
    int getTotalItemsPacked() const;

    // Display
    void display() const;
};

#endif
