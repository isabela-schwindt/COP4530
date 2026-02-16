#include "TripRecord.h"
#include <iostream>
using namespace std;

// Default constructor
TripRecord::TripRecord()
    : destination(""), startDate(""), endDate(""),
      totalItemsPacked(0) {}

// Parameterized constructor
TripRecord::TripRecord(string destination,
                       string startDate,
                       string endDate,
                       int totalItemsPacked)
    : destination(destination),
      startDate(startDate),
      endDate(endDate),
      totalItemsPacked(totalItemsPacked) {}

string TripRecord::getDestination() const {
    return destination;
}

string TripRecord::getStartDate() const {
    return startDate;
}

string TripRecord::getEndDate() const {
    return endDate;
}

int TripRecord::getTotalItemsPacked() const {
    return totalItemsPacked;
}

void TripRecord::display() const {
    cout << "Destination: " << destination
         << " | From: " << startDate
         << " | To: " << endDate
         << " | Items Packed: " << totalItemsPacked
         << endl;
}
