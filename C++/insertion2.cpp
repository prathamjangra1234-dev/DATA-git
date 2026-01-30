#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;
    int *ptr = arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!";
    } else {
        // Shift elements to right using pointer
        for (int i = n; i >= pos; i--) {
            *(ptr + i) = *(ptr + i - 1);
        }

        *(ptr + pos - 1) = value;
        n++;

        cout << "Array after insertion:\n";
        for (int i = 0; i < n; i++) {
            cout << *(ptr + i) << " ";
        }
    }

    return 0;
}
