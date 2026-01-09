#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 3, 45, 7};
    int max, min;


    max = arr[0];
    min = arr[0];


    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;

    return 0;
}
