#include "pch.h"
#include "../TravelSystem/Flight.h"

TEST(FlightTest, ConstructorAndPrint) {
    // �������� ������� Flight
    Flight flight("2024-12-15", "10:00 AM", "1:00 PM", "FL123");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    flight.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Flight Information:\tDate:\t2024-12-15 Flight Time:\t10:00 AM Arrival Time:\t1:00 PM Flight Number:\tFL123\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(FlightTest, GetDate) {
    // �������� ������� Flight
    Flight flight("2024-12-15", "10:00 AM", "1:00 PM", "FL123");

    // �������� ������������� �������� ������ getdate
    EXPECT_EQ(flight.getdate(), "2024-12-15");
}

TEST(FlightTest, ChangeFlightNumber) {
    // �������� ������� Flight
    Flight flight("2024-12-15", "10:00 AM", "1:00 PM", "FL123");

    // ��������� ������ �����
    flight.chagenumberIfFlight("FL456");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    flight.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Flight Information:\tDate:\t2024-12-15 Flight Time:\t10:00 AM Arrival Time:\t1:00 PM Flight Number:\tFL456\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);

    // ��������, ��� ����� ����� ���������
    EXPECT_EQ(flight.getdate(), "2024-12-15"); // �������� ������ ���� �� �����, ������� ���������� ����� �����
}