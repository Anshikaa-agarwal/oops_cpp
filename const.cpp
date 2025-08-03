#include<iostream>
#include<string>
using namespace std;

class Example {
    // const variable
    const int count = 10;

    public:
    Example() {};
    Example(int c) : count(c) {}; // initialize const in initializer list.

    void getCount() {
        cout << count;
    }
    void setCount(int c) {
        // this->count = c;
        // returns error because count is not modifiable value.
    } 
};

class Student {
    int age;            // non-const
    const int id;       // const

public:
    Student(int a, int i): age(a), id(i) {}

    void updateAge(int newAge) {
        age = newAge;   // ✅ allowed
        // id = 10;     // ❌ error: const can't be changed anywhere
    }

    void show() const {
        // age = 20;    // ❌ error: can't modify in const function
        // id = 5;      // ❌ error: const can't be modified
        cout << age << " " << id << endl;
    }
};


int main() {
    Example e1(5);
    e1.getCount();
}