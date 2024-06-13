#include "calc.hpp"
#include <iostream>

Calculator::Calculator() {}

double Calculator::divide(double num1, double num2) {
    if (num2 == 0) {
        std::cout << "Ошибка: нельзя делить на ноль!" << std::endl;
        return 0;
    } else {
        return num1 / num2;
    }
}
