#include "pch.h"
#include "../TravelSystem/Transport.h"\
#include "../TravelSystem/Company.h"

TEST(TransportTest, ConstructorAndPrint) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Создание объекта Transport
    Transport transport("Airplane", company);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    transport.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Transport Type: Airplane\nTransport Company: Sky Airlines\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(TransportTest, GetTransportType) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Создание объекта Transport
    Transport transport("Airplane", company);

    // Проверка типа транспорта
    EXPECT_EQ(transport.getTransportType(), "Airplane");
}