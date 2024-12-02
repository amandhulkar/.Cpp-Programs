#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Constructor to initialize date
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overloading '++' operator to find next date
    void operator++() {
        day++;
        if ((month == 2 && day > 28) || (month == 4 || month == 6 || month == 9 || month == 11 && day > 30) || (day > 31)) {
            day = 1;
            month++;
        }
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    // Function to display date
    void display() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date(31, 12, 2023);
    cout << "Current Date: ";
    date.display();

    ++date;  // Find next date
    cout << "Next Date: ";
    date.display();

    return 0;
}

