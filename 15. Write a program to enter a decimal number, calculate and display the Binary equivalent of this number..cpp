#include <iostream>
using namespace std;

int main() {
    int decimal, remainder;
    string binary = "";

    // Prompt the user to enter a decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Convert decimal to binary
    while (decimal > 0) {
        remainder = decimal % 2;        // Get the remainder (either 0 or 1)
        binary = to_string(remainder) + binary; // Prepend the remainder to the binary string
        decimal = decimal / 2;          // Update the decimal number
    }

    // Display the binary equivalent
    if (binary == "") {
        binary = "0"; // Handle the case when the input is 0
    }
    cout << "Binary equivalent: " << binary << endl;

    return 0;
}

