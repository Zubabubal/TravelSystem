#include "Ticket.h"

Ticket::Ticket(const string& firstName, const string& secondName, int age, const Transport& transport)
    : Person(firstName, secondName, age), transport(transport) {}

void Ticket::print() const {
    Person::print();
    transport.print();
}

void Ticket::updateStatus(const string& newStatus) {
    status = newStatus;
}