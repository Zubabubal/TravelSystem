#include "pch.h"
#include "../TravelSystem/Booking.h"
#include "../TravelSystem/Company.h"
#include "../TravelSystem/Transport.h"
#include "../TravelSystem/Ticket.h"

TEST(BookingTest, ConstructorAndPrint) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Создание объекта Transport
    Transport transport("Airplane", company);

    // Создание объекта Ticket
    Ticket ticket("John", "Doe", 30, transport);

    // Создание объекта Booking
    Booking booking(ticket);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    booking.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Booking Details:\nPerson information: John Doe, Age: 30\nTransport Type: Airplane\nTransport Company: Sky Airlines\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(BookingTest, UpdateTicketStatus) {
    // Создание объекта Company
    Company company("Sky Airlines");

    // Создание объекта Transport
    Transport transport("Airplane", company);

    // Создание объекта Ticket
    Ticket ticket("John", "Doe", 30, transport);

    // Создание объекта Booking
    Booking booking(ticket);

    // Обновление статуса через Booking
    booking.updateTicketStatus("Confirmed");

    // Проверка, что статус обновился
    // Здесь вы можете добавить метод getStatus() в Ticket, чтобы проверить статус
    // EXPECT_EQ(ticket.getStatus(), "Confirmed");
}