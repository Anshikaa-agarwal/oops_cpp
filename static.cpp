#include<iostream>
using namespace std;

class Animal {
    int age;
    char type;
    static int count;

    public:
    Animal() {
        count++;
        cout << "count " << count << endl;
    }
    void barks() {
        cout << "animal barks." << endl;
    }
    ~Animal() {
        count--;
        cout << "count " << count << endl;
    }

    void setCount(int c) {
        this->count = c;
    }
};
class hahaha {
    private:
    int a = 5;
    public:
    static int laugh;

    static void hello() {
        cout << "hello" << endl;
    }
};

int Animal::count = 0;
int hahaha::laugh = 5;

int main() {
    Animal o1, o2, o3;
    o1.setCount(10);
    cout << hahaha::laugh << endl;
    hahaha::hello();
    return 0;
}