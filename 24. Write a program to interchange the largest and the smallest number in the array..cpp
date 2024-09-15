#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize variables to store indices of the smallest and largest elements
    int maxIndex = 0, minIndex = 0;

    // Find the index of the largest and smallest element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;  // Update maxIndex if current element is larger
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;  // Update minIndex if current element is smaller
        }
    }

    // Interchange the largest and smallest elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    // Output the array after the interchange
    cout << "Array after interchanging largest and smallest elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

