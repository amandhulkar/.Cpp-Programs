#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the vectors: ";
    cin >> n;

    int vector1[n], vector2[n], result[n];

    cout << "Enter elements of the first vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Enter elements of the second vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        result[i] = vector1[i] + vector2[i];
    }

    cout << "Resultant vector after addition: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

