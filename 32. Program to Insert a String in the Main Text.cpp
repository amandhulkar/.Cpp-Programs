#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[100] = "Hello, how are you?";
    char insert[50];
    int pos;

    cout << "Original text: " << text << endl;
    cout << "Enter the string to insert: ";
    cin >> insert;
    cout << "Enter the position to insert the string: ";
    cin >> pos;

    char result[150];
    strncpy(result, text, pos);
    result[pos] = '\0';
    strcat(result, insert);
    strcat(result, text + pos);

    cout << "Modified text: " << result << endl;

    return 0;
}

