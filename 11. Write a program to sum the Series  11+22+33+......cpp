#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += static_cast<double>(i) / i; // Each term is i/i which equals 1
    }

    cout << "The sum of the series is: " << sum << endl;

    return 0;
}


