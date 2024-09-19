#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");
    double num1, num2, result;
    char operation;

    std::cout << "Добро пожаловать в калькулятор!" << std::endl;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите оператор (+, -, *, /, %): ";
    std::cin >> operation;

    if (operation != '%') {
        std::cout << "Введите второе число: ";
        std::cin >> num2;
    }
    else {
        num2 = 0; 
    }

    if (operation == '+') {
        result = num1 + num2;
        std::cout << "Результат: " << num1 << " + " << num2 << " = " << result << std::endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        std::cout << "Результат: " << num1 << " - " << num2 << " = " << result << std::endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        std::cout << "Результат: " << num1 << " * " << num2 << " = " << result << std::endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "Результат: " << num1 << " / " << num2 << " = " << result << std::endl;
        }
        else {
            std::cout << "Ошибка: Деление на ноль!" << std::endl;
        }
    }
    else if (operation == '%') {
        result = (num1 * num2) / 100;
        std::cout << "Результат: " << num2 << "% от " << num1 << " = " << result << std::endl;
    }
    else {
        std::cout << "Ошибка: Неверный оператор!" << std::endl;
    }

    return 0;
}
