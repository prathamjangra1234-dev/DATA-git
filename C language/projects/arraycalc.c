#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;
    int row, col;

    // Input elements
    printf("Enter elements of 3x3 array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input row and column to find address
    printf("Enter row and column to find address: ");
    scanf("%d %d", &row, &col);

    // Display value and address
    printf("Value at arr[%d][%d] = %d\n", row, col, arr[row][col]);
    printf("Address = %u", &arr[row][col]);

    return 0;