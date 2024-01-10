#include <iostream>
#include <cmath>

using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double x);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);

int main() {
    char operation;
    double num1, num2;

    cout << "Enter operator (+, -, *, /, ^, sqrt, sin, cos, tan): ";
    cin >> operation;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '^') {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    } else if (operation == 'sqrt' || operation == 'sin' || operation == 'cos' || operation == 'tan') {
        cout << "Enter a number: ";
        cin >> num1;
        num2 = 0; // The second number is not used in these operations
    } else {
        cout << "Invalid operator!";
        return 1;
    }

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2);
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2);
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << divide(num1, num2);
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        case '^':
            cout << "Result: " << power(num1, num2);
            break;
        case 'sqrt': 
            cout << "Result: " << squareRoot(num1);
            break;
        case 'sin':
            cout << "Result: " << sine(num1);
            break;
        case 'cos':
            cout << "Result: " << cosine(num1);
            break;
        case 'tan':
            cout << "Result: " << tangent(num1);
            break;
        default:
            cout << "Invalid operator!";
            return 1;
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
    return a / b;
} 

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double x) {
    return sqrt(x);
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}
