#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    char *newStr = new char[strlen(str) + 1];
    strcpy(newStr, str);

    cout << "Copied string: " << newStr << endl;

    delete[] newStr;  // Freeing dynamically allocated memory

    return 0;
}

