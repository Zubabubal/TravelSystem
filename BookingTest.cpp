#include "pch.h"
#include "../TravelSystem/Booking.h"
#include "../TravelSystem/Company.h"
#include "../TravelSystem/Transport.h"
#include "../TravelSystem/Ticket.h"

TEST(BookingTest, ConstructorAndPrint) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // �������� ������� Transport
    Transport transport("Airplane", company);

    // �������� ������� Ticket
    Ticket ticket("John", "Doe", 30, transport);

    // �������� ������� Booking
    Booking booking(ticket);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    booking.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Booking Details:\nPerson information: John Doe, Age: 30\nTransport Type: Airplane\nTransport Company: Sky Airlines\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(BookingTest, UpdateTicketStatus) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // �������� ������� Transport
    Transport transport("Airplane", company);

    // �������� ������� Ticket
    Ticket ticket("John", "Doe", 30, transport);

    // �������� ������� Booking
    Booking booking(ticket);

    // ���������� ������� ����� Booking
    booking.updateTicketStatus("Confirmed");

    // ��������, ��� ������ ���������
    // ����� �� ������ �������� ����� getStatus() � Ticket, ����� ��������� ������
    // EXPECT_EQ(ticket.getStatus(), "Confirmed");
}