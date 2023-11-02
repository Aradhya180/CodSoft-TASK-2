#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator\n";
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation you want to perform (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operation. Please use +, -, *, or /.\n";
            return 1; // Exit with an error code
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << "\n";

    return 0;
}
