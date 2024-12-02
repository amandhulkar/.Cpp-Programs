#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    char names[n][50];
    cout << "Enter the names of students: ";
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sorting the names
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[50];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "Sorted names of students: " << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

