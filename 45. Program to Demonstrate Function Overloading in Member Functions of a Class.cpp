#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function to add two floating-point numbers
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 10 and 20 (int): " << calc.add(10, 20) << endl;
    cout << "Sum of 10, 20, and 30 (int): " << calc.add(10, 20, 30) << endl;
    cout << "Sum of 10.5 and 20.3 (float): " << calc.add(10.5f, 20.3f) << endl;

    return 0;
}

