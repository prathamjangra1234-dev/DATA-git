#include <iostream>
using namespace std;

int main() {
    int n;
    int *p;

    cout << "Enter size of array: ";
    cin >> n;

    p = new int[n];   // array memory allocation

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }

    delete[] p;   // free array memory

    return 0;
}
