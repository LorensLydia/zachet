#include <iostream>
#include "Divider.hpp"

double Divider::divideNumbers(double num1, double num2) {
    if (num2 == 0) {
        std::cout << "Ошибка: деление на ноль невозможно." << std::endl;
        return 0;
    }
    return num1 / num2;
}

int main() {
    double number1, number2;

    std::cout << "Введите первое число: ";
    std::cin >> number1;

    std::cout << "Введите второе число: ";
    std::cin >> number2;

    Divider divider;
    double result = divider.divideNumbers(number1, number2);

    std::cout << "Результат деления: " << result << std::endl;

    return 0;
}
