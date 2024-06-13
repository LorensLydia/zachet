#include <iostream>
#include "Divider.hpp"

   int main() {
       Divider divider;
       double result = divider.divideNumbers(10, 2);
       std::cout << "Результат деления: " << result << std::endl;
       return 0;
   }
