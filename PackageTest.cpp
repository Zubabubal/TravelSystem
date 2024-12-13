#include "pch.h"
#include "../TravelSystem/Package.h"

TEST(PackageTest, ConstructorAndPrint) {
    // Создание вектора услуг
    std::vector<std::string> services = { "Hotel", "Flight", "Tour" };

    // Создание объекта Package
    Package package(services, 299.99);

    // Перенаправление вывода в строковый поток
    testing::internal::CaptureStdout();
    package.print();
    std::string output = testing::internal::GetCapturedStdout();

    // Ожидаемый вывод
    std::string expectedOutput = "Package Services: Hotel Flight Tour \nTotal Price: $299.99\n";

    // Сравнение фактического и ожидаемого вывода
    EXPECT_EQ(output, expectedOutput);
}