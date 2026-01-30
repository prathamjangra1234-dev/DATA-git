#include <iostream>
using namespace std;

int main() {
    int *p;

    p = new int;   // memory allocation

    *p = 10;

    cout << "Value = " << *p << endl;

    delete p;      // memory deallocation

    return 0;
}
