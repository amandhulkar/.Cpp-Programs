#include <iostream>

using namespace std;

int main() {
    int num1, num2, temp;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Display numbers before swapping
    cout << "Before swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display numbers after swapping
    cout << "After swapping: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

