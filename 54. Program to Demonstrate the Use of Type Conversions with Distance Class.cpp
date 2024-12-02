#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    // Constructor to initialize meters
    Distance(float m = 0) : meters(m) {}

    // Type conversion from Distance to int (for kilometers)
    operator int() {
        return meters / 1000;  // Conversion to kilometers
    }

    // Type conversion from int (centimeters) to Distance
    Distance(int cm) {
        meters = cm / 100.0;
    }

    void displayMeters() const {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    Distance d1(1500.5);  // 1500.5 meters
    d1.displayMeters();

    // Convert Distance to kilometers (int)
    int km = d1;
    cout << "Converted Distance: " << km << " kilometers" << endl;

    // Convert from centimeters to Distance
    Distance d2 = 25000;  // 25000 cm = 250 meters
    d2.displayMeters();

    return 0;
}

