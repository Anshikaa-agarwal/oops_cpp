#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called" << endl;
    }
    ~Test() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Main Start" << endl;
    Test t1;
    cout << "Main End" << endl;
    return 0;
}
