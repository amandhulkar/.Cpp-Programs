#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
};

int main() {
    Student student;
    Student *ptr = &student;

    cout << "Enter student's name: ";
    cin >> ptr->name;
    cout << "Enter student's roll number: ";
    cin >> ptr->rollNo;

    cout << "\nStudent Information: " << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Roll Number: " << ptr->rollNo << endl;

    return 0;
}

