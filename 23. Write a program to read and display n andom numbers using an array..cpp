#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time() to seed random numbers
using namespace std;

int main() {
    int n;

    // Ask the user how many random numbers they want
    cout << "Enter the number of random numbers you want to generate: ";
    cin >> n;

    // Create an array to store the random numbers
    int arr[n];

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate n random numbers and store them in the array
    for (int i = 0; i < n; i++) {
        arr[i] = rand();  // Generate a random number
    }

    // Display the random numbers
    cout << "Generated random numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

