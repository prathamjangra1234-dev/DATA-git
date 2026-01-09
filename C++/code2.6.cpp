#include <iostream>
using namespace std;

int main() {
    int num;
    cout <<"enter num : ";
    cin >> num;

    if (num<0) {
        cout <<num <<"is negative" <<endl;
    }else if(num>0) {
        cout <<num <<"is positivr" <<endl;
    } else{
        cout <<"number is zero" <<endl;
    }

    return 0;
}