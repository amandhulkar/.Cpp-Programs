#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50];

    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (strcmp(str1, str2) == 0) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}

