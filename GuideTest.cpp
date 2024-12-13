#include "pch.h"
#include "../TravelSystem/Guide.h"

TEST(GuideTest, ConstructorAndPrint) {
    // Создание объекта Guide
    Guide guide("Alice", "English");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    guide.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Guide: Alice\nLanguage: English\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(GuideTest, ChangeLanguage) {
    // Создание объекта Guide
    Guide guide("Alice", "English");

    // Изменение языка
    guide.changeLanguage("Spanish");

    // Проверка, что язык обновился
    EXPECT_EQ(guide.getLanguage(), "Spanish");
}

TEST(GuideTest, GetLanguage) {
    // Создание объекта Guide
    Guide guide("Alice", "English");

    // Проверка возвращаемого значения метода getLanguage
    EXPECT_EQ(guide.getLanguage(), "English");
}