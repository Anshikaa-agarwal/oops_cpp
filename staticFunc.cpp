#include <iostream>
using namespace std;

class Student {
    static int count;
public:
    Student() {
        count++;
        cout << "Student count constructor: " << count << endl;
    }

    ~Student() {
        cout << "Student count destructor: " << count << endl;
        count--;
    }
    static void showCount() {
        cout << "Student count: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;
    Student::showCount(); 
    return 0;
}
