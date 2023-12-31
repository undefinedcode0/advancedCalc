#include <iostream>
#include <cmath>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    char operation;

    cout << "[~] Calculator\n\n";

    cout << "[+] Enter first number: ";
    cin >> num1;
    cout << "[+] Enter operator (+, -, *, /): ";
    cin >> operation;
    cout << "[+] Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "[+] Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "[+] Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "[+] Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "[+] Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "[!] Invalid operator" << endl;
    }

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "[!] Cannot divide by zero" << endl;
        return NAN; // Not-a-Number to indicate an error
    }
}
