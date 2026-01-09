#include <iostream>
using namespace std;

int sub(int a, int b) {
    return a-b;
}
int main() {
    int first,second;
    cin >> first;
    cin >> second;
    int ans = sub(first,second);
    cout << "SUB = " << ans <<endl;

    return 0;
}