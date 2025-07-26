#include<iostream>
#include<string>
using namespace std;

class Car {
    private:
    string type;
    float avg;
    int age;

    public:
    // constructor
    Car() {
        cout << "car created" << endl;
    }
    // destructor
    ~Car() {
        cout << "Car deleted" << endl;
    }
    // setter func
    void setCarType(string name){
        this->type = name;
    }
    // getter func
    string getCarType() {
        return this->type;
    }
};
int main() {
    Car baleno;
    baleno.setCarType("baleno");
    cout << baleno.getCarType() << endl;
}