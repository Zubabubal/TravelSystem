#include "pch.h"
#include "../TravelSystem/Review.h"

TEST(ReviewTest, ConstructorAndPrint) {
    // �������� ������� Review
    Review review("John Doe", 5, "Excellent tour!");

    // ��������������� ������ � ��������� �����
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();

    // ��������� �����
    std::string expectedOutput = "Reviewer: John Doe\nRating: 5\nComment: Excellent tour!\n";

    // ��������� ������������ � ���������� ������
    EXPECT_EQ(output, expectedOutput);
}

TEST(ReviewTest, ChangeComment) {
    // �������� ������� Review
    Review review("John Doe", 5, "Excellent tour!");

    // ��������� �����������
    review.changeComment("Amazing experience!");

    // ��������, ��� ����������� ���������
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();
    std::string expectedOutput = "Reviewer: John Doe\nRating: 5\nComment: Amazing experience!\n";

    EXPECT_EQ(output, expectedOutput);
}

TEST(ReviewTest, DelComment) {
    // �������� ������� Review
    Review review("John Doe", 5, "Excellent tour!");

    // �������� �����������
    review.delComment();

    // ��������, ��� ����������� ������ (������� �� ������ ������)
    testing::internal::CaptureStdout();
    review.print();
    std::string output = testing::internal::GetCapturedStdout();
    std::string expectedOutput = "Reviewer: John Doe\nRating: 5\nComment:  \n"; // �������� �������� �� ������

    EXPECT_EQ(output, expectedOutput);
}