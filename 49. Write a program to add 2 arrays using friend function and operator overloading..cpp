#include <iostream>
using namespace std;

class Array {
private:
    int size;
    int* elements;

public:
    // Constructor to initialize array
    Array(int s) : size(s) {
        elements = new int[size];
    }

    // Destructor to clean up memory
    ~Array() {
        delete[] elements;
    }

    // Method to input elements of the array
    void inputElements() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> elements[i];
        }
    }

    // Method to display elements of the array
    void displayElements() const {
        for (int i = 0; i < size; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    // Friend function for operator overloading to add two arrays
    friend Array operator+(const Array& a1, const Array& a2);
};

// Overload '+' operator using friend function
Array operator+(const Array& a1, const Array& a2) {
    // Ensure both arrays have the same size
    if (a1.size != a2.size) {
        cerr << "Error: Arrays must have the same size to add!" << endl;
        exit(1);
    }

    Array result(a1.size);
    for (int i = 0; i < a1.size; i++) {
        result.elements[i] = a1.elements[i] + a2.elements[i];
    }

    return result;
}

int main() {
    int n;

    cout << "Enter the size of the arrays: ";
    cin >> n;

    Array arr1(n), arr2(n);

    cout << "Input elements for the first array:" << endl;
    arr1.inputElements();

    cout << "Input elements for the second array:" << endl;
    arr2.inputElements();

    Array result = arr1 + arr2; // Add arrays using the overloaded '+' operator

    cout << "The resultant array is: ";
    result.displayElements();

    return 0;
}

