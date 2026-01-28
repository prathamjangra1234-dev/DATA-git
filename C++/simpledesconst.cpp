#include <iostream>
using namespace std;

class Destructor {
public:
    ~Destructor() {
        cout << "Destructor called: Object destroyed" << endl;
    }
};

int main() {
    Destructor d1;
}
