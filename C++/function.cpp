#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}
int main() {
    int first,second;
    cin >> first;
    cin >> second;
    int ans = add(first,second);
    cout << "SUM = " << ans <<endl;

    return 0;
}