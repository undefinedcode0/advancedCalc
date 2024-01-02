#include <iostream>
#include <cmath>
#include <memory>

class Calculator {
public:
    Calculator(double a, double b, char op) : num1(a), num2(b), operation(op) {}

    double calculateResult() const {
        switch (operation) {
            case '+':
                return add();
            case '-':
                return subtract();
            case '*':
                return multiply();
            case '/':
                return divide();
            case '^':
                return power();
            default:
                std::cout << "[!] Invalid operator" << std::endl;
                return NAN;
        }
    }

private:
    double num1, num2;
    char operation;

    double add() const {
        return num1 + num2;
    }

    double subtract() const {
        return num1 - num2;
    }

    double multiply() const {
        return num1 * num2;
    }

    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cout << "[!] Cannot divide by zero" << std::endl;
            return NAN;
        }
    }

    double power() const {
        return std::pow(num1, num2);
    }
};

int main() {
    double num1, num2;
    char operation;

    std::cout << "[~] Calculator\n\n";

    std::cout << "[+] Enter first number: ";
    std::cin >> num1;
    std::cout << "[+] Enter operator (+, -, *, /, ^): ";
    std::cin >> operation;
    std::cout << "[+] Enter second number: ";
    std::cin >> num2;

    Calculator calculator(num1, num2, operation);
    std::cout << "[+] Result: " << calculator.calculateResult() << std::endl;

    return 0;
}
