#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks[5];  // Array to store marks in 5 subjects
};

int main() {
    Student student;
    int totalMarks = 0;

    cout << "Enter student's name: ";
    cin >> student.name;

    cout << "Enter marks in 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
        totalMarks += student.marks[i];
    }

    cout << "\nStudent Name: " << student.name << endl;
    cout << "Total Marks: " << totalMarks << endl;

    return 0;
}

