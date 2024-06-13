Вот три теста для программы, использующей класс Divider для деления двух чисел:

1. **Тест на обычное деление**:
      #include <iostream>
   #include "Divider.hpp"

   int main() {
       Divider divider;
       double result = divider.divideNumbers(10, 2);
       std::cout << "Результат деления: " << result << std::endl;
       return 0;
   }
   
   Ожидаемый вывод: "Результат деления: 5"

2. **Тест на деление на ноль**:
      #include <iostream>
   #include "Divider.hpp"

   int main() {
       Divider divider;
       double result = divider.divideNumbers(8, 0);
       std::cout << "Результат деления: " << result << std::endl;
       return 0;
   }
   
   Ожидаемый вывод: "Ошибка: деление на ноль невозможно."

3. **Тест на отрицательные числа**:
      #include <iostream>
   #include "Divider.hpp"

   int main() {
       Divider divider;
       double result = divider.divideNumbers(-15, 3);
       std::cout << "Результат деления: " << result << std::endl;
       return 0;
   }
   
   Ожидаемый вывод: "Результат деления: -5"

Вы можете скомпилировать и запустить эти тесты в вашей среде разработки на C++, чтобы убедиться, что программа работает правильно. Если у вас возникнут дополнительные вопросы или нужна дополнительная помощь, не стесняйтесь спрашивать!
