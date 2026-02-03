#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor is called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor is called" << endl;
    }
};
int main() {
    Demo obj;   // Object creation
    cout << "Inside main function" << endl;
    return 0;   // Object destroyed automatically
}
