#include <iostream>
using namespace std;

struct Complex {
    int real, imag;
};

void display(Complex c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    Complex c1, c2;
    
    cout << "Enter first complex number (real and imaginary parts): ";
    cin >> c1.real >> c1.imag;
    
    cout << "Enter second complex number (real and imaginary parts): ";
    cin >> c2.real >> c2.imag;

    cout << "First Complex Number: ";
    display(c1);

    cout << "Second Complex Number: ";
    display(c2);

    Complex sum = add(c1, c2);
    cout << "Sum of the two complex numbers: ";
    display(sum);

    Complex diff = subtract(c1, c2);
    cout << "Difference of the two complex numbers: ";
    display(diff);

    return 0;
}

