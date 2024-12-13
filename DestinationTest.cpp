#include "pch.h"
#include "../TravelSystem/Destination.h"

TEST(DestinationTest, ConstructorAndPrint) {
    // Создание объекта Destination
    Destination destination("Paris", "The capital of France known for its art, fashion, and culture.");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    destination.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Destination: Paris\nDescription: The capital of France known for its art, fashion, and culture.\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(DestinationTest, GetDescription) {
    // Создание объекта Destination
    Destination destination("Paris", "The capital of France known for its art, fashion, and culture.");

    // Проверка возвращаемого значения метода getDescription
    EXPECT_EQ(destination.getDiscription(), "The capital of France known for its art, fashion, and culture.");
}