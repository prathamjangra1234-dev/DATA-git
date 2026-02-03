#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Numbers appearing even number of times:\n";

    for (int i = 0; i < n; i++) {
        int count = 1;

        if (arr[i] == -1)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  
            }
        }
        if (count % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
