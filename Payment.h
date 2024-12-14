#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include <iostream>

using namespace std;

class Payment {
private:
    double amount;
    string method;
    string status;

public:
    Payment(double amount, const string& method, const string& status);
    void print() const;
};

#endif 