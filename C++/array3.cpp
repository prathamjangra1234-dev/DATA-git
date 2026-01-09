#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter elements:\n";

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;

    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missingNumber = totalSum - arrSum;

    cout << "Missing number = " << missingNumber << endl;

    return 0;
}
