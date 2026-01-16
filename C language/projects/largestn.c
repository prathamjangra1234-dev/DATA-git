#include <stdio.h>

int main() {
    int n, i;
    int num, max;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &max);  
    
    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max) {
            max = num;
        }
    }

    printf("Largest number = %d", max);

    return 0;
}
