#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;
    int *ptr = arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!";
    } else {
        // Shift elements to left using pointer
        for (int i = pos - 1; i < n - 1; i++) {
            *(ptr + i) = *(ptr + i + 1);
        }

        n--;

        cout << "Array after deletion:\n";
        for (int i = 0; i < n; i++) {
            cout << *(ptr + i) << " ";
        }
    }

    return 0;
}
