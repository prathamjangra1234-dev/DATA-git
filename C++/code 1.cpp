#include <iostream>
using namespace std;

int main() {
    int numbers;
    bool ISEVEN = false;

    cout <<"enter a number: ";
    cin >>numbers;

    if(numbers%2==0) {
        ISEVEN = true ;
    }
    cout << "The number is Even";
    } else {
        cout << "The number is Odd";
    }
    return 0;
}