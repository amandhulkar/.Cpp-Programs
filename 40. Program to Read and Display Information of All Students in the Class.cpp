#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int age;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ": " << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNo;
        cout << "Age: ";
        cin >> students[i].age;
    }

    cout << "\nDisplaying student details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ": " << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Age: " << students[i].age << endl;
    }

    return 0;
}

