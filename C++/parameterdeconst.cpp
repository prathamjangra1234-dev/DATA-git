#include <iostream>
using namespace std;

class Sample {
    int *ptr;

public:
    Sample() {
        ptr = new int;
        *ptr = 100;
        cout << "Memory allocated" << endl;
    }

    ~Sample() {
        delete ptr;
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    Sample s1;
}
