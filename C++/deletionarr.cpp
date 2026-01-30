#include <iostream>
using namespace std;

int main() {
    int arr[10], n, pos;
    int *p = arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }

    cout << "Enter position to delete: ";
    cin >> pos;
    
    for (int i = pos - 1; i < n - 1; i++) {
        *(p + i) = *(p + i + 1);
    }

    n--;

    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}
