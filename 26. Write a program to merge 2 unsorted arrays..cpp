#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    // Copy elements from first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from second array
    for (int j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }
}

int main() {
    int n1, n2;

    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements for the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements for the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int merged[n1 + n2]; // Create merged array of size n1 + n2
    mergeArrays(arr1, n1, arr2, n2, merged);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

