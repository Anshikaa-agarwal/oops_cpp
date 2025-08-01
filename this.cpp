// This keyword
#include<iostream>
using namespace std;

class Animal {
    int age=5;
    char type;

    public:
    Animal() {
        cout << "this -> " << this << endl;
    }
    void setAge(int age) {
        age = age;
    }
    void setAgeUsingThis(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
};

int main() {
    Animal cat;
    cout << "Address of cat object: " << &cat << endl; 
    cat.setAge(10);
    cout << "Age without this keyword " << cat.getAge() << endl;

    cat.setAgeUsingThis(10);
    cout << "Age with this keyword " << cat.getAge() << endl;
}