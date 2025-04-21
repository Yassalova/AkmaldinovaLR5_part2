#include "CUTE/cute.h"
#include "CUTE/cute/cute_runner.h"
#include "Akmaldinova_MathTask.h"

using namespace std;

// Тест для получения первой цифры числа
void testGetFirstDigit() {
    int X = 345;
    int expected = 3;
    int actual = getFirstDigit(X);
    ASSERT_EQUAL(expected, actual);
}

// Тест для получения N-й цифры числа (справа налево)
void testGetNthDigit() {
    int X = 345;
    int N = 1; // Первая цифра справа
    int expected = 5;
    int actual = getNthDigit(X, N);
    ASSERT_EQUAL(expected, actual);

    N = 2; // Вторая цифра справа
    expected = 4;
    actual = getNthDigit(X, N);
    ASSERT_EQUAL(expected, actual);
}

// Тест для проверки ввода трехзначного числа
void testUserInput_Valid() {
    string str = "456"; // допустимое значение
    bool expected = true; // ожидаемое значение
    bool actual = UserInput(str); // предполагаемая функция проверки
    ASSERT_EQUAL(expected, actual);
}

// Тест для проверки ввода не трехзначного числа
void testUserInput_Invalid() {
    string str = "45"; // недопустимое значение
    bool expected = false; // ожидаемое значение
    bool actual = UserInput(str); // предполагаемая функция проверки
    ASSERT_EQUAL(expected, actual);
}

int main() {

    cute::suite s;

    s.push_back(CUTE(testGetFirstDigit));
    s.push_back(CUTE(testGetNthDigit));
    s.push_back(CUTE(testUserInput_Valid));
    s.push_back(CUTE(testUserInput_Invalid));

 ide_listener<> listener;
    makeRunner(listener)(s, "All Math Task Tests");
    return 0;
    
}