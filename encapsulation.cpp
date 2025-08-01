#include<iostream>
#include<vector>
using namespace std;

class Student {
    int age =-1;
    int roll;
    int garde;

    public: 
    void setAge(int a) {
        if(a < 18) 
        cout << "Student must be greater than or equal to 18 years." << endl;
        else 
        this->age = a;
    }
    int getAge() {
        return this->age;
    }
};
int main() {
    Student anshika;
    anshika.setAge(15);
    cout << anshika.getAge();

    return 0;
}