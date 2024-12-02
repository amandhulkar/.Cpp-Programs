#include <iostream>
using namespace std;

// Base class: Bill
class Bill {
protected:
    double amount;

public:
    Bill(double amt = 0) : amount(amt) {}

    virtual void payBill() = 0;  // Pure virtual function
};

// Derived class: Cheque
class Cheque : public Bill {
public:
    Cheque(double amt) : Bill(amt) {}

    void payBill() override {
        cout << "Paying bill of $" << amount << " by cheque." << endl;
    }
};

// Derived class: Cash
class Cash : public Bill {
public:
    Cash(double amt) : Bill(amt) {}

    void payBill() override {
        cout << "Paying bill of $" << amount << " by cash." << endl;
    }
};

int main() {
    Bill *bill1 = new Cheque(150.50);
    Bill *bill2 = new Cash(85.75);

    bill1->payBill();
    bill2->payBill();

    delete bill1;
    delete bill2;

    return 0;
}

