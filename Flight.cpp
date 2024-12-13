#include "Flight.h"

Flight::Flight(const string date, const string flightTime, const string arrivalTime, const string numberOfFlight)
    : date(date), flightTime(flightTime), arrivalTime(arrivalTime), numberOfFlight(numberOfFlight) {}

void Flight::print() const {
    cout << "Flight Information:\t" << "Date:\t" << date << " Flight Time:\t" << flightTime << " Arrival Time:\t" << arrivalTime << " Flight Number:\t" << numberOfFlight << endl;
}

string Flight::getdate() {
    return date;
}

void Flight::chagenumberIfFlight(const string& newNumber) {
    numberOfFlight = newNumber;
}