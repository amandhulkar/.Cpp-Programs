#include <iostream>
using namespace std;

int main() {
    int integerNumber;
    cout << "Enter an integer: ";
    cin >> integerNumber;

    // Convert integer to float
    float floatNumber = static_cast<float>(integerNumber);

    // Display the result
    cout << "The floating point number is: " << floatNumber << endl;

    return 0;
}

