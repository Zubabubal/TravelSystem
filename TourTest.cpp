#include "pch.h"
#include "../TravelSystem/Tour.h"
#include "../TravelSystem/Guide.h"

TEST(TourTest, ConstructorAndPrint) {
    // �������� ������� Guide
    Guide guide("Alice", "English");

    // �������� ������� Tour
    Tour tour("City Tour", "Explore the city and its landmarks.", 99.99, guide);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    tour.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Tour: City Tour\nDescription: Explore the city and its landmarks.\nPrice: $99.99\nGuide: Alice\nLanguage: English\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(TourTest, GetDescription) {
    // �������� ������� Guide
    Guide guide("Alice", "English");

    // �������� ������� Tour
    Tour tour("City Tour", "Explore the city and its landmarks.", 99.99, guide);

    // �������� ������������� �������� ������ getDescription
    EXPECT_EQ(tour.getDescription(), "Explore the city and its landmarks.");
}
