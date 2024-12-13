#include "pch.h"
#include "../TravelSystem/Company.h"

TEST(CompanyTest, ConstructorAndPrint) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    company.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Transport Company: Sky Airlines\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(CompanyTest, UpdateName) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Изменение имени компании
    company.updateName("Ocean Airlines");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    company.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Transport Company: Ocean Airlines\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}