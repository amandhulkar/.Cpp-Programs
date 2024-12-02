#include <iostream>
using namespace std;

enum Colors { Red, Green, Blue, Yellow, Orange };

int main() {
    Colors color = Green;

    switch (color) {
        case Red:
            cout << "Color is Red" << endl;
            break;
        case Green:
            cout << "Color is Green" << endl;
            break;
        case Blue:
            cout << "Color is Blue" << endl;
            break;
        case Yellow:
            cout << "Color is Yellow" << endl;
            break;
        case Orange:
            cout << "Color is Orange" << endl;
            break;
        default:
            cout << "Unknown color" << endl;
    }

    return 0;
}

