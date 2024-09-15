#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int largest;

    // Prompt the user to enter 10 numbers
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Initialize the largest number with the first element
    largest = numbers[0];

    // Use a for loop with the ternary operator to find the largest number
    for (int i = 1; i < 10; i++) {
        largest = (numbers[i] > largest) ? numbers[i] : largest;
    }

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}

