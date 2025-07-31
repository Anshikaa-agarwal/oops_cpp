// Q9: Can we declare a member function of one class as a friend of another class?
#include<iostream>
using namespace std;

class Second;

class First {
    int age;
    int roll;

    public:
    void greet() {
        cout << "say hello!" << endl;
    }
};

class Second {
    int gap;
    friend void First::greet();
};
int main () {

}