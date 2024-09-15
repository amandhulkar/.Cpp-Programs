#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two integer numbers
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = static_cast<float>(num1) / num2; // Cast to float for division
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    // Output results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    if (num2 != 0) {
        cout << "Quotient: " << quotient << endl;
    }

    return 0;
}

