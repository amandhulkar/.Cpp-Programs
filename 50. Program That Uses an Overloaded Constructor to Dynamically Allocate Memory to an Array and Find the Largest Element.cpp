#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    // Overloaded constructor to allocate memory
    Array(int n) {
        size = n;
        arr = new int[size];
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to find the largest element
    int findLargest() {
        int largest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    Array arr(n);
    cout << "Largest element in the array: " << arr.findLargest() << endl;

    return 0;
}

