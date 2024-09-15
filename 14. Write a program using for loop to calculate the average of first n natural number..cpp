#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;

    // Get the value of n from the user
    cout << "Enter a positive integer: ";
    cin >> n;

    // Use a for loop to sum the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Calculate the average
    double average = sum / n;

    // Output the average
    cout << "The average of the first " << n << " natural numbers is: " << average << endl;

    return 0;
}

