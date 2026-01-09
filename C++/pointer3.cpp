#include <iostream>
using namespace std;

int main() {
    int num = 10;        
    int* ptr = &num;      

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;

    
    *ptr = 20;
    cout << "New value of num: " << num << endl;

    return 0;
}