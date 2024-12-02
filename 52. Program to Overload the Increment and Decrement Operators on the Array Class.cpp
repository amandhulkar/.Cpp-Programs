#include <iostream>
using namespace std;

class Array {
private:
    int arr[5];

public:
    // Constructor to initialize array
    Array(int a[]) {
        for (int i = 0; i < 5; i++) {
            arr[i] = a[i];
        }
    }

    // Overloading '++' operator (prefix increment)
    void operator++() {
        for (int i = 0; i < 5; i++) {
            arr[i]++;
        }
    }

    // Overloading '--' operator (prefix decrement)
    void operator--() {
        for (int i = 0; i < 5; i++) {
            arr[i]--;
        }
    }

    // Display array elements
    void display() const {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Array array(arr);

    cout << "Original array: ";
    array.display();

    ++array;  // Increment array elements
    cout << "After increment: ";
    array.display();

    --array;  // Decrement array elements
    cout << "After decrement: ";
    array.display();

    return 0;
}

