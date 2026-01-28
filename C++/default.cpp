#include <iostream>
using namespace std;

void show(string name = "Friend") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    show();         
    show("Pratham"); 
    return 0;
}
