#include <iostream>
#include <iomanip> // For formatting
using namespace std;

void generateCalendar(int startDay, int numDays) {
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

    // Print leading spaces for the first row
    for (int i = 0; i < startDay; i++) {
        cout << "    "; // 4 spaces for alignment
    }

    // Print the days of the month
    for (int day = 1; day <= numDays; day++) {
        cout << setw(3) << day << " "; // Use setw for formatting with 3 spaces
        startDay++;

        // Move to the next line after printing Saturday (day 6)
        if (startDay == 7) {
            cout << endl;
            startDay = 0; // Reset to Sunday
        }
    }

    // Final newline for better output formatting
    cout << endl;
}

int main() {
    int startDay, numDays;

    // Get the start day and number of days from the user
    cout << "Enter the start day of the month (0=Sun, 1=Mon, ..., 6=Sat): ";
    cin >> startDay;
    cout << "Enter the number of days in the month: ";
    cin >> numDays;

    // Generate the calendar
    generateCalendar(startDay, numDays);

    return 0;
}


