#include "pch.h"
#include "../TravelSystem/Ticket.h"

TEST(TicketTest, ConstructorAndPrint) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Создание объекта Transport
    Transport transport("Airplane", company);

    // Создание объекта Ticket
    Ticket ticket("John", "Doe", 30, transport);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    ticket.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Person information: John Doe, Age: 30\nTransport Type: Airplane\nTransport Company: Sky Airlines\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}