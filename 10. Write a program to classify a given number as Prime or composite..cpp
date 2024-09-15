#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0, 1, and negative numbers are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself, it's composite
        }
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is a composite number." << endl;
    }

    return 0;
}

