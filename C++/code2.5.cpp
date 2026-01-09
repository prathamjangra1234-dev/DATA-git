#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num%5==0 && num%11==0){
        cout <<num<<"number is divisible by both"
    }else if (num % 5 == 0) {
        cout << num<<"The number is divisible by both 5 " <<endl;
    } else if (num%11==0) {
        cout << num <<"The number is divisible by 11" <<endl;
    }else {
        cout<<num<<"The number is divisible by none"
    }

    return 0;
}
