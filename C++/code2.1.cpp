#include <iostream>
using namespace std;

int main() {
    char ans;
    cout <<"ENTER THE CHARACTER: ";
    cin >> ans;
    if(ans=='a' || ans=='e' || ans=='i' || ans=='o' || ans=='i' || ans=='u'){
        cout <<"IT IS A VOWEL" <<endl;
    }else{
            cout <<"IT IS A CONSTANT" <<endl;
    }
    return 0;
}
