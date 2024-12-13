#include "pch.h"
#include "../TravelSystem/Company.h"

TEST(CompanyTest, ConstructorAndPrint) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    company.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Transport Company: Sky Airlines\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(CompanyTest, UpdateName) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // ��������� ����� ��������
    company.updateName("Ocean Airlines");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    company.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Transport Company: Ocean Airlines\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}