#include "pch.h"
#include "../TravelSystem/Flight.h"

TEST(FlightTest, ConstructorAndPrint) {
    // Создание объекта Flight
    Flight flight("2024-12-15", "10:00 AM", "1:00 PM", "FL123");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    flight.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Flight Information:\tDate:\t2024-12-15 Flight Time:\t10:00 AM Arrival Time:\t1:00 PM Flight Number:\tFL123\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(FlightTest, GetDate) {
    // Создание объекта Flight
    Flight flight("2024-12-15", "10:00 AM", "1:00 PM", "FL123");

    // Проверка возвращаемого значения метода getdate
    EXPECT_EQ(flight.getdate(), "2024-12-15");
}

TEST(FlightTest, ChangeFlightNumber) {
    // Создание объекта Flight
    Flight flight("2024-12-15", "10:00 AM", "1:00 PM", "FL123");

    // Изменение номера рейса
    flight.chagenumberIfFlight("FL456");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    flight.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Flight Information:\tDate:\t2024-12-15 Flight Time:\t10:00 AM Arrival Time:\t1:00 PM Flight Number:\tFL456\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);

    // Проверка, что номер рейса обновился
    EXPECT_EQ(flight.getdate(), "2024-12-15"); // Проверка должна быть на метод, который возвращает номер рейса
}