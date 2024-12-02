#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of lines: ";
    cin >> n;
    cin.ignore();  // Ignore leftover newline

    string lines[n];
    cout << "Enter the lines of text: " << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, lines[i]);
    }

    cout << "Enter the starting line number (m): ";
    cin >> m;

    cout << "Displaying lines starting from line " << m << ":" << endl;
    for (int i = m - 1; i < n; i++) {
        cout << lines[i] << endl;
    }

    return 0;
}

