#include "pch.h"
#include "../TravelSystem/Package.h"

TEST(PackageTest, ConstructorAndPrint) {
    // �������� ������� �����
    std::vector<std::string> services = { "Hotel", "Flight", "Tour" };

    // �������� ������� Package
    Package package(services, 299.99);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    package.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Package Services: Hotel Flight Tour \nTotal Price: $299.99\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}