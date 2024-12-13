#include "pch.h"
#include "../TravelSystem/Payment.h"

TEST(PaymentTest, ConstructorAndPrint) {
    // Создание объекта Payment
    Payment payment(150.75, "Credit Card", "Completed");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    payment.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Payment Amount: $150.75\nMethod: Credit Card\nStatus: Completed\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}