#include "Flight.h"

Flight::Flight(const string date, const string flightTime, const string arrivalTime, const string numberOfFlight)
    : date(date), flighttime(flightTime), arrivaltime(arrivalTime), numberofflight(numberOfFlight) {}

void Flight::print() const {
    cout << "Flight Information:\t" << "Date:\t" << date << " Flight Time:\t" << flighttime << " Arrival Time:\t" << arrivaltime << " Flight Number:\t" << numberofflight << endl;
}

string Flight::getdate() {
    return date;
}

void Flight::chagenumberIfFlight(const string& newNumber) {
    numberofflight = newNumber;
}