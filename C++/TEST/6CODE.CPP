#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 3) {
        cout << "Array must have at least 3 elements";
        return 0;
    }

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first, second, third;

    first = second = third = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "Third largest element is: " << third;

    return 0;
}
