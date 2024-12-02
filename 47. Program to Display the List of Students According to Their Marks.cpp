#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

// Comparator function to sort students by marks
bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> students[i].name;
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> students[i].marks;
    }

    // Sorting the students by marks
    sort(students, students + n, compare);

    // Display the sorted list
    cout << "\nList of students sorted by marks:\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].name << " - " << students[i].marks << endl;
    }

    return 0;
}

