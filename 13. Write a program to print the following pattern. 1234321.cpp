#include <iostream>
using namespace std;

int main() {
    int n = 2; // Number of lines in the pattern

    for (int i = 1; i <= n; ++i) {
        // Print increasing sequence
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        // Print decreasing sequence
        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

