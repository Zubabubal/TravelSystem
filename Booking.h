#ifndef BOOKING_H
#define BOOKING_H

#include "Ticket.h"
#include <string>
#include <iostream>

using namespace std;

class Booking {
private:
    Ticket ticket;

public:
    Booking(const Ticket& t);
    void print() const;
    void updateTicketStatus(const string& newStatus);
};

#endif 