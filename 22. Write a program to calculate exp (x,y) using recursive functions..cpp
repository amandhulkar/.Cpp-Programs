#include <iostream>
using namespace std;

// Function to calculate X^Y using recursion
int power(int x, int y) {
    if (y == 0) 
        return 1;  // Base case: any number to the power of 0 is 1
    return x * power(x, y - 1);  // Recursive case
}

int main() {
    int base, exponent;

    // Input the base and exponent
    cout << "Enter base (X): ";
    cin >> base;
    cout << "Enter exponent (Y): ";
    cin >> exponent;

    // Calculate base^exponent
    int result = power(base, exponent);

    // Output the result
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}

