#include <iostream>
using namespace std;

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0) 
        return a;  // Base case: when b is 0, gcd is a
    return gcd(b, a % b);  // Recursive case
}

int main() {
    int num1, num2;
    
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Calculate GCD
    int result = gcd(num1, num2);
    
    // Output the result
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

