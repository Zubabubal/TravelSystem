#include "pch.h"
#include "../TravelSystem/SupportService.h"

TEST(SupportServiceTest, ConstructorAndPrint) {
    // Создание объекта SupportService
    SupportService supportService("support@example.com", "9 AM - 5 PM");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    supportService.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Contact Info: support@example.com\nOperating Hours: 9 AM - 5 PM\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(SupportServiceTest, GetContact) {
    // Создание объекта SupportService
    SupportService supportService("support@example.com", "9 AM - 5 PM");

    // Проверка возвращаемого значения метода getContact
    EXPECT_EQ(supportService.getContact(), "support@example.com");
}