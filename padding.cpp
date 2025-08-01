#include<iostream>
#include<string>
using namespace std;

class Animal {
    char a;
    char type;
    int age;


    public:
    void setAge(int a) {
        if(age > 0) 
        age = a;
    }
};

int main() {
    Animal doggy;
    cout << sizeof(doggy) << endl;
}