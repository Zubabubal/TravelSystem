#include "pch.h"
#include "../TravelSystem/Hotel.h"

TEST(HotelTest, ConstructorAndPrint) {
    // �������� ������� Hotel
    Hotel hotel("Grand Hotel", "New York", 5);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    hotel.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Hotel information:\tHotel name:\tGrand Hotel Hotel location:\tNew York Number of hotel stars:\t5\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(HotelTest, GetLocation) {
    // �������� ������� Hotel
    Hotel hotel("Grand Hotel", "New York", 5);

    // �������� ������������� �������� ������ getLocation
    EXPECT_EQ(hotel.getlocation(), "New York");
}

TEST(HotelTest, GetNumStars) {
    // �������� ������� Hotel
    Hotel hotel("Grand Hotel", "New York", 5);

    // �������� ������������� �������� ������ getNumStars
    EXPECT_EQ(hotel.getNumStars(), 5);
}