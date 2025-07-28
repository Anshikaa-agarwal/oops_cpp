#include <iostream>
#include <string>
using namespace std;

class first {
    int age;
    int roll;
    friend void accessFirst(first);
    friend void accessFirst(first f, int a);
    friend class Second;

public:
    first() {
        age = 20;
        roll = 3;
    }
};

class Second {
public:
    void printDetails(first f) {
        cout << "age: " << f.age << endl;
        cout << "roll: " << f.roll << endl;
    }
};

void accessFirst(first) {
    cout << "hiii" << endl;
}

void accessFirst(first f, int a) {
    cout << "age: " << f.age << endl;
    f.age = a;
    cout << "Updated age: " << f.age << endl;
    cout << "roll: " << f.roll << endl;
}

int main() {
    cout << "Using friend function:" << endl;
    first f1;
    accessFirst(f1);
    accessFirst(f1, 5);

    cout << "Using friend class:" << endl;
    Second s1;
    s1.printDetails(f1);
    return 0;
}