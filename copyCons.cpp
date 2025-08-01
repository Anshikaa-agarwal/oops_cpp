// This keyword
#include<iostream>
using namespace std;

class Animal {
    int age=5;
    char type;

    public:
    Animal(int age, char type) {
        this->age = age;
        this->type = type;
    } 
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
    void showDetails(){
        cout << "age = " << this->age << endl << "type = " << this->type << endl;
    }
    Animal(Animal &a) {
        this->age = a.age;
        this->type = a.type;
    }

    /*
        Animal(Animal &a) {
        this->age = a.age;
        this->type = a.type;
    }

    This would return an error because object is passed as a copy, to create which we need to define a copy constructor, thus it would call copy constructor and we
    would stuck in infinite loop.
    */
};

int main() {
    Animal cat(5, 'a');
    Animal dog(cat);
    dog.setAge(10);

    cout << "cat: " << endl;
    cat.showDetails();

    cout << "dog: " << endl;
    dog.showDetails();
}