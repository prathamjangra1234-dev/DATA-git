#include <iostream>
using namespace std;

int main() {
    int number,i,sum=0;

    cout<< "ENTER NUMBER: ";
    cin >> number;

    for(i=1;i<=number;i++){
        sum +=i;
    }
    cout <<"SUM: "<< sum <<endl;
    return 0;
}