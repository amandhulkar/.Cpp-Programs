#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    // Dynamic constructor to allocate memory
    Array(int n) {
        size = n;
        arr = new int[size];
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to count even and odd elements
    void countEvenOdd() {
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        cout << "Number of even elements: " << evenCount << endl;
        cout << "Number of odd elements: " << oddCount << endl;
    }

    // Destructor to free dynamically allocated memory
    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    Array arr(n);
    arr.countEvenOdd();

    return 0;
}

