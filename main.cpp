#include <iostream>
#include "divider.hpp"

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
