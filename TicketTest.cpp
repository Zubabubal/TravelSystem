#include "pch.h"
#include "../TravelSystem/Ticket.h"

TEST(TicketTest, ConstructorAndPrint) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // �������� ������� Transport
    Transport transport("Airplane", company);

    // �������� ������� Ticket
    Ticket ticket("John", "Doe", 30, transport);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    ticket.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Person information: John Doe, Age: 30\nTransport Type: Airplane\nTransport Company: Sky Airlines\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}