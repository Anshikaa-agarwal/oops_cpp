// Shallow copy
#include<iostream>
using namespace std;

class Person {
    int *roll;
    int age;

    public: 
    // default constructor
    Person() {
        cout << "Constructor called." << endl;
    }

    // parameterized constructor
    Person (int rollVal, int age) {
        this->age = age;
        roll = new int;
        *roll = rollVal;
    }
    
    // shallow copy - points to same address
    Person(Person& p) {
        this->age = p.age;
        this->roll = p.roll;
    }

    // member functions
    int getAge() {
        return this->age;
    }

    int getRoll() {
        return *(this->roll);
    }

    void setRoll(int r) {
        *roll = r;
    } 

    void display() {
        cout << "Age: " << this->age << endl;
        cout << "Roll number: " << *roll << endl;
    }
};

int main() {
    Person anshika(3,20);
    cout << "Initially anshika's details: " << endl;
    anshika.display();

    Person anshi(anshika);
    anshi.setRoll(4);

    cout << "Anshi's details on: " << endl;
    anshi.display();

    cout << "After updating Anshi's roll no., Anshika's details: " << endl;
    anshika.display();

    return 0;
}