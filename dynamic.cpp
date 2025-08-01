#include<iostream>
using namespace std;

class person {
    public: 
    int id;
    int age;
};

int main () {
    person *anshika = new person;
    (*anshika).age = 10;
    cout << anshika->age << endl;
}