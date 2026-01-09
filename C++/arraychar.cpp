#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "foggy";
    unordered_map<char,int> m;

    for(char c : s) m[c]++;

    for(char c : s) {
        if(m[c] > 1) {
            cout << c << "ofy" << c;
            break;
        }
    }
    return 0;
}
