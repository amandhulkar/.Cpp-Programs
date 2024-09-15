#include <iostream>
using namespace std;

int main() {
    int n = 26; // Number of rows in the pattern

    for (int i = 1; i <= n; ++i) {
        // Print characters from 'A' to the ith character
        for (char ch = 'A'; ch < 'A' + i; ++ch) {
            cout << ch;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

