Конечно, вот как можно разбить код на два файла: calculator.hpp и calculator.cpp.

calculator.hpp:
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {
public:
    Calculator();
    double divide(double num1, double num2);
};

#endif


calculator.cpp:
#include "calculator.hpp"
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


main.cpp:
#include <iostream>
#include "calculator.hpp"

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


Вот пример разделения кода на заголовочный файл (header file) и файл с реализацией (implementation file). Теперь у вас есть файл calculator.hpp с объявлением класса и файл calculator.cpp с определением методов класса Calculator. Файл main.cpp использует класс Calculator для выполнения операции деления двух чисел.
