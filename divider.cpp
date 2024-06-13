#include "divider.hpp"
#include <iostream>

Divider::Divider() {}

double Divider::divideNumbers(double num1, double num2) {
    if (num2 == 0) {
        std::cout << "Ошибка: деление на ноль невозможно." << std::endl;
        return 0;
    }
    return num1 / num2;
}
