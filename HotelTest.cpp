#include "pch.h"
#include "../TravelSystem/Hotel.h"

TEST(HotelTest, ConstructorAndPrint) {
    // Создание объекта Hotel
    Hotel hotel("Grand Hotel", "New York", 5);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    hotel.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Hotel information:\tHotel name:\tGrand Hotel Hotel location:\tNew York Number of hotel stars:\t5\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(HotelTest, GetLocation) {
    // Создание объекта Hotel
    Hotel hotel("Grand Hotel", "New York", 5);

    // Проверка возвращаемого значения метода getLocation
    EXPECT_EQ(hotel.getlocation(), "New York");
}

TEST(HotelTest, GetNumStars) {
    // Создание объекта Hotel
    Hotel hotel("Grand Hotel", "New York", 5);

    // Проверка возвращаемого значения метода getNumStars
    EXPECT_EQ(hotel.getNumStars(), 5);
}