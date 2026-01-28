#include <iostream>
using namespace std;

// function using pass by reference
void swapNumbers(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping:\n";
    cout << "x = " << x << " y = " << y << endl;

    swapNumbers(x, y);   // pass by reference

    cout << "After swapping:\n";
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}
