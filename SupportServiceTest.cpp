#include "pch.h"
#include "../TravelSystem/SupportService.h"

TEST(SupportServiceTest, ConstructorAndPrint) {
    // �������� ������� SupportService
    SupportService supportService("support@example.com", "9 AM - 5 PM");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    supportService.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Contact Info: support@example.com\nOperating Hours: 9 AM - 5 PM\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(SupportServiceTest, GetContact) {
    // �������� ������� SupportService
    SupportService supportService("support@example.com", "9 AM - 5 PM");

    // �������� ������������� �������� ������ getContact
    EXPECT_EQ(supportService.getContact(), "support@example.com");
}