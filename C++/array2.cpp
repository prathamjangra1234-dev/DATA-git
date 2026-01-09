#include <iostream>
using namespace std;

int main() {
    int arr, size, pos, value, i;

    cout << "Enter the size of the array: ";
    cin >> size;
    
      cout << "Enter the elements: ";
     for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position where you want to insert the element (1-based index): ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> value;

    for (i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;

    size++;

    cout << "Array after insertion: ";
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}   