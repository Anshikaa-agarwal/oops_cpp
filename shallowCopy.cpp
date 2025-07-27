#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char* title;

public:
    // Constructor
    Book(const char* name) {
        title = new char[strlen(name) + 1];
        strcpy(title, name);
    }

    // Display function
    void show() {
        cout << "Title: " << title << endl;
    }

    // Destructor
    ~Book() {
        delete[] title;
        cout << "Destructor called for: " << title << endl;
    }
};

int main() {
    Book b1("C++ Guide");
    Book b2 = b1;  // 🔁 Shallow copy

    b1.show();
    b2.show();

    return 0;
}
