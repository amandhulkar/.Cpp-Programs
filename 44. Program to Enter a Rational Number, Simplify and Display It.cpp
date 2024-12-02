#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct Rational {
    int numerator;
    int denominator;
};

void simplify(Rational &r) {
    int divisor = gcd(r.numerator, r.denominator);
    r.numerator /= divisor;
    r.denominator /= divisor;
}

int main() {
    Rational r;

    cout << "Enter numerator: ";
    cin >> r.numerator;
    cout << "Enter denominator: ";
    cin >> r.denominator;

    simplify(r);

    cout << "Simplified Rational Number: " << r.numerator << "/" << r.denominator << endl;

    return 0;
}

