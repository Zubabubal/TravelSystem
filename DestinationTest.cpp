#include "pch.h"
#include "../TravelSystem/Destination.h"

TEST(DestinationTest, ConstructorAndPrint) {
    // �������� ������� Destination
    Destination destination("Paris", "The capital of France known for its art, fashion, and culture.");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    destination.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Destination: Paris\nDescription: The capital of France known for its art, fashion, and culture.\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(DestinationTest, GetDescription) {
    // �������� ������� Destination
    Destination destination("Paris", "The capital of France known for its art, fashion, and culture.");

    // �������� ������������� �������� ������ getDescription
    EXPECT_EQ(destination.getDiscription(), "The capital of France known for its art, fashion, and culture.");
}