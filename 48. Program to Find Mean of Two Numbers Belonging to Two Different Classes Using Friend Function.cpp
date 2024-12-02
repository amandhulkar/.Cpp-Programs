#include <iostream>
using namespace std;

class ClassB;  // Forward declaration

class ClassA {
private:
    int numA;
public:
    ClassA(int a) : numA(a) {}
    friend float mean(ClassA, ClassB);  // Friend function declaration
};

class ClassB {
private:
    int numB;
public:
    ClassB(int b) : numB(b) {}
    friend float mean(ClassA, ClassB);  // Friend function declaration
};

// Friend function definition
float mean(ClassA objA, ClassB objB) {
    return (objA.numA + objB.numB) / 2.0;
}

int main() {
    ClassA a(10);
    ClassB b(20);

    cout << "Mean of the two numbers: " << mean(a, b) << endl;

    return 0;
}

