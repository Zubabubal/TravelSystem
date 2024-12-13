#include "pch.h"
#include "../TravelSystem/Guide.h"

TEST(GuideTest, ConstructorAndPrint) {
    // �������� ������� Guide
    Guide guide("Alice", "English");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    guide.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Guide: Alice\nLanguage: English\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(GuideTest, ChangeLanguage) {
    // �������� ������� Guide
    Guide guide("Alice", "English");

    // ��������� �����
    guide.changeLanguage("Spanish");

    // ��������, ��� ���� ���������
    EXPECT_EQ(guide.getLanguage(), "Spanish");
}

TEST(GuideTest, GetLanguage) {
    // �������� ������� Guide
    Guide guide("Alice", "English");

    // �������� ������������� �������� ������ getLanguage
    EXPECT_EQ(guide.getLanguage(), "English");
}