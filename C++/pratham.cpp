#include <iostream>
using namespace std;

int main() {
    int ans;
    bool check=false;
    cout << "ENTER YOUR AGE";
    cin >> ans;

    if(ans>=18) {
        check=true;
    }

    if (check) {
        cout <<"you can vote" <<endl;
    } else{
        cout <<"you cannot vote" <<endl;
    }
    return 0;
}