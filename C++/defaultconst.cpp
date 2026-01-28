#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called: Object created" << endl;
    }
};

int main() {
    Student s1;
}
