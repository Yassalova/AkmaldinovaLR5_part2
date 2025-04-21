#include <iostream>
#include "AKMALDINOVA_MathTask.h"
using namespace std;

int main() {
    int X, N;

    // Ввод трехзначного числа
    inputX(X, "Введите трехзначное число X: ");
    
    // Ввод цифры N
    inputN(N, "Введите цифру N (1 или 2): ");

    // Получение первой цифры
    int firstDigit = getFirstDigit(X);
    cout << "Первая цифра числа X: " << firstDigit << endl;

    // Получение N-й цифры
    int nthDigit = getNthDigit(X, N);
    cout << "N-я цифра числа X (справа налево): " << nthDigit << endl;

    return 0;
}