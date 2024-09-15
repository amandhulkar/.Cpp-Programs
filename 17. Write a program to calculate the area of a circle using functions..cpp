#include <iostream>
using namespace std;

// Function to calculate the area of the circle
double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    double radius;

    // Prompt the user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the function to calculate the area
    double area = calculateArea(radius);

    // Display the area of the circle
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

