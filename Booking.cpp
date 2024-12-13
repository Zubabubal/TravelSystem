#include "Booking.h"

Booking::Booking(const Ticket& t) : ticket(t) {}

void Booking::print() const {
    cout << "Booking Details:" << endl;
    ticket.print();
}

void Booking::updateTicketStatus(const string& newStatus) {
    ticket.updateStatus(newStatus);
}