#include "pch.h"
#include "../TravelSystem/Payment.h"

TEST(PaymentTest, ConstructorAndPrint) {
    // �������� ������� Payment
    Payment payment(150.75, "Credit Card", "Completed");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    payment.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Payment Amount: $150.75\nMethod: Credit Card\nStatus: Completed\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}