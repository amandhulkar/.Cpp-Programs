#include <iostream>
#include <cmath> // For using the abs() function

using namespace std;

int main() {
    int num1, num2;
    int distance;

    // Input two integer numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate the distance
    distance = abs(num1 - num2);

    // Output the result
    cout << "The distance between " << num1 << " and " << num2 << " is: " << distance << endl;

    return 0;
}

