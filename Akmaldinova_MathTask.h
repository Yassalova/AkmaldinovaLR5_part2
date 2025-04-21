#ifndef MATH_TASK_H
#define MATH_TASK_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

// Проверка, является ли строка трехзначным числом
bool isThreeDigitNumber(const string &input) {
    if (input.length() != 3  !isdigit(input[0])) return false;
    int number = stoi(input);
    return number >= 100 && number <= 999; // Проверка на диапазон трехзначных чисел
}

// Ввод трехзначного числа X
void inputX(int &X, const string &prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    while (!isThreeDigitNumber(input)) {
        cout << "Ошибка! Введите трехзначное число: ";
        getline(cin, input);
    }
    X = stoi(input);
}

// Ввод цифры N, которая должна быть меньше количества разрядов числа X
void inputN(int &N, const string &prompt) {
    string input;
    cout << prompt;
    getline(cin, input);
    while (!isNaturalNumber(input)  stoi(input) < 1 || stoi(input) >= 3) {
        cout << "Ошибка! N должно быть 1 или 2: ";
        getline(cin, input);
    }
    N = stoi(input);
}

// Получение первой цифры числа X
int getFirstDigit(int X) {
    while (X >= 10) {
        X /= 10; // Удаление последней цифры
    }
    return X; // Возвращаем первую цифру
}

// Получение N-й цифры числа X (нумерация справа налево)
int getNthDigit(int X, int N) {
    for (int i = 0; i < N - 1; ++i) {
        X /= 10; // Удаление последней цифры
    }
    return X % 10; // Возвращаем N-ю цифру
    
}

#endif