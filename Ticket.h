#ifndef TICKET_H
#define TICKET_H

#include "Person.h"
#include "Transport.h"
#include <string>
#include <iostream>

using namespace std;

class Ticket : public Person {
private:
    string status;
    Transport transport;

public:
    Ticket(const string& firstName, const string& secondName, int age, const Transport& transport);
    void print() const;
    void updateStatus(const string& newStatus);
};

#endif 