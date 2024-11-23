#include <iostream>
using namespace std;

void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int matrix[3][3], int transpose[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[3][3], transpose[3][3];

    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    displayMatrix(matrix);

    transposeMatrix(matrix, transpose);

    cout << "Transposed Matrix:" << endl;
    displayMatrix(transpose);

    return 0;
}

