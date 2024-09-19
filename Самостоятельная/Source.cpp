#include <iostream>

int main() {

    setlocale(LC_ALL, "Russian");
    double num1, num2, result;
    char operation;

    std::cout << "����� ���������� � �����������!" << std::endl;

    std::cout << "������� ������ �����: ";
    std::cin >> num1;
    std::cout << "������� �������� (+, -, *, /, %): ";
    std::cin >> operation;

    if (operation != '%') {
        std::cout << "������� ������ �����: ";
        std::cin >> num2;
    }
    else {
        num2 = 0; 
    }

    if (operation == '+') {
        result = num1 + num2;
        std::cout << "���������: " << num1 << " + " << num2 << " = " << result << std::endl;
    }
    else if (operation == '-') {
        result = num1 - num2;
        std::cout << "���������: " << num1 << " - " << num2 << " = " << result << std::endl;
    }
    else if (operation == '*') {
        result = num1 * num2;
        std::cout << "���������: " << num1 << " * " << num2 << " = " << result << std::endl;
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "���������: " << num1 << " / " << num2 << " = " << result << std::endl;
        }
        else {
            std::cout << "������: ������� �� ����!" << std::endl;
        }
    }
    else if (operation == '%') {
        result = (num1 * num2) / 100;
        std::cout << "���������: " << num2 << "% �� " << num1 << " = " << result << std::endl;
    }
    else {
        std::cout << "������: �������� ��������!" << std::endl;
    }

    return 0;
}
