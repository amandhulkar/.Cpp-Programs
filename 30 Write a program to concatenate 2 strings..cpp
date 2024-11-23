#include <iostream>
#include <cstring>  // For strcpy and strcat functions
using namespace std;

int main() {
    char str1[100], str2[100], result[200];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Copy the first string into the result
    strcpy(result, str1);

    // Concatenate the second string to the result
    strcat(result, str2);

    cout << "The concatenated string is: " << result << endl;

    return 0;
}

