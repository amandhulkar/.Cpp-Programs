#include <iostream>
using namespace std;

// Function to calculate the volume of a cuboid with default arguments
double calculateVolume(double length = 1.0, double width = 1.0, double height = 1.0) {
    return length * width * height;
}

int main() {
    double length, width, height;

    // Ask the user to input the dimensions (if they wish to)
    cout << "Enter the length of the cuboid (or press enter for default 1): ";
    cin >> length;
    cout << "Enter the width of the cuboid (or press enter for default 1): ";
    cin >> width;
    cout << "Enter the height of the cuboid (or press enter for default 1): ";
    cin >> height;

    // Calculate the volume using default arguments if not all values are provided
    double volume = calculateVolume(length, width, height);

    // Display the calculated volume
    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}

