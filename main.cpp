#include <iostream>
#include "calc.hpp"

int main() {
    Calculator calc;
    double num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    double result = calc.divide(num1, num2);
    if (num2 != 0) {
        std::cout << "Результат деления: " << result << std::endl;
    }

    return 0;
}
