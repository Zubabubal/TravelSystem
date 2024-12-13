#include "pch.h"
#include "../TravelSystem/Transport.h"\
#include "../TravelSystem/Company.h"

TEST(TransportTest, ConstructorAndPrint) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // �������� ������� Transport
    Transport transport("Airplane", company);

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    transport.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Transport Type: Airplane\nTransport Company: Sky Airlines\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(TransportTest, GetTransportType) {
    // �������� ������� Company
    Company company("Sky Airlines");

    // �������� ������� Transport
    Transport transport("Airplane", company);

    // �������� ���� ����������
    EXPECT_EQ(transport.getTransportType(), "Airplane");
}