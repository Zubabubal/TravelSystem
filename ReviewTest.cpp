#include "pch.h"
#include "../TravelSystem/Review.h"

TEST(ReviewTest, ConstructorAndPrint) {
    // Создание объекта Review
    Review review("John Doe", 5, "Excellent tour!");

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Reviewer: John Doe\nRating: 5\nComment: Excellent tour!\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}

TEST(ReviewTest, ChangeComment) {
    // Создание объекта Review
    Review review("John Doe", 5, "Excellent tour!");

    // Изменение комментария
    review.changeComment("Amazing experience!");

    // Проверка, что комментарий обновился
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();
    std::string expectedOutput = "Reviewer: John Doe\nRating: 5\nComment: Amazing experience!\n";

    EXPECT_EQ(output, expectedOutput);
}

TEST(ReviewTest, DelComment) {
    // Создание объекта Review
    Review review("John Doe", 5, "Excellent tour!");

    // Удаление комментария
    review.delComment();

    // Проверка, что комментарий удален (изменен на пустую строку)
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();
    std::string expectedOutput = "Reviewer: John Doe\nRating: 5\nComment:  \n"; // Обратите внимание на пробел

    EXPECT_EQ(output, expectedOutput);
}