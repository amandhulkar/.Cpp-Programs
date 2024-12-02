#include <iostream>
using namespace std;

struct Address {
    string city;
    int zipCode;
};

struct Student {
    string name;
    int rollNo;
    Address addr;
};

int main() {
    Student student;

    cout << "Enter student's name: ";
    cin >> student.name;
    cout << "Enter student's roll number: ";
    cin >> student.rollNo;
    cout << "Enter student's city: ";
    cin >> student.addr.city;
    cout << "Enter student's ZIP code: ";
    cin >> student.addr.zipCode;

    // Display student information
    cout << "\nStudent Information: " << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNo << endl;
    cout << "City: " << student.addr.city << endl;
    cout << "ZIP Code: " << student.addr.zipCode << endl;

    return 0;
}

