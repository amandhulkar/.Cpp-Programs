#include <iostream>
using namespace std;

int main() {
    int a, b;
    int *p1, *p2;

    cout << "Enter two integers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    int sum = *p1 + *p2;
    cout << "Sum: " << sum << endl;

    return 0;
}

