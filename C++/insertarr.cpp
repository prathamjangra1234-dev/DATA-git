#include <iostream>
using namespace std;

int main() {
    int arr[10], n, pos, value;
    int *p = arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    for (int i = n; i >= pos; i--) {
        *(p + i) = *(p + i - 1);
    }

    *(p + pos - 1) = value;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}
