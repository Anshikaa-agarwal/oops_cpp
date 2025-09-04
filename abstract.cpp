#include<iostream>
using namespace std;
class Base {
public:
    Base() { cout << "Base Constructor\n"; }
    virtual void show() = 0;
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor\n"; }
    void show() override { cout << "Hello\n"; }
};

int main() {
    Derived d1;
}