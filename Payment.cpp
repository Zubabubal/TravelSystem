#include "Payment.h"

Payment::Payment(double amount, const string& method, const string& status)
    : amount(amount), method(method), status(status) {}

void Payment::print() const {
    cout << "Payment Amount: $" << amount << "\nMethod: " << method << "\nStatus: " << status << endl;
}