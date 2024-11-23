#include <iostream>
using namespace std;

void readArray(int arr[2][2][2]) {
    cout << "Enter the elements of the 2x2x2 array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "Element at [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }
}

void displayArray(int arr[2][2][2]) {
    cout << "The 2x2x2 array is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;  // Separate the 2D layers for clarity
    }
}

int main() {
    int arr[2][2][2];

    readArray(arr);   // Read elements from the user
    displayArray(arr); // Display the array

    return 0;
}

