#include <iostream>
using namespace std;

int main() {
    char inputChar;

    cout << "Enter a character: ";
    cin >> inputChar;

    // Check if the character is lowercase
    if (inputChar >= 'a' && inputChar <= 'z') {
        // Convert to uppercase
        inputChar = inputChar - ('a' - 'A');
    }

    cout << "Converted character: " << inputChar << endl;

    return 0;
}

