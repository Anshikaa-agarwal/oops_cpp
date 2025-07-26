#include<iostream>
#include<string>
using namespace std;

class Animal {
    int age;
    string name;
    int legs;

    public:
    Animal() {
        cout << "Constructor called" << endl;
    }
    Animal(int a, string n, int l) {
        age = a;
        name = n;
        legs = l;
    }

    Animal(Animal& a) {
        age = a.age;
        name = a.name;
        legs = a.legs;
    }

    void printAnimal() {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Legs: " << legs << endl;
    }
};
int main() {
    Animal a1(5, "Tommy", 4);
    a1.printAnimal();

    Animal a2(a1);
    a2.printAnimal();

    return 0;
}