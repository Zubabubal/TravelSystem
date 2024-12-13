#include "pch.h"
#include "../TravelSystem/Tour.h"
#include "../TravelSystem/Guide.h"

TEST(TourTest, ConstructorAndPrint) {
    // Создание объекта Guide
    Guide guide("Alice", "English");

    // Создание объекта Tour
    Tour tour("City Tour", "Explore the city and its landmarks.", 99.99, guide);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    tour.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Tour: City Tour\nDescription: Explore the city and its landmarks.\nPrice: $99.99\nGuide: Alice\nLanguage: English\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(TourTest, GetDescription) {
    // Создание объекта Guide
    Guide guide("Alice", "English");

    // Создание объекта Tour
    Tour tour("City Tour", "Explore the city and its landmarks.", 99.99, guide);

    // Проверка возвращаемого значения метода getDescription
    EXPECT_EQ(tour.getDescription(), "Explore the city and its landmarks.");
}
