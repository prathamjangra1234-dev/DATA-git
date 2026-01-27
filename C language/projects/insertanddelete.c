#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, element;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    do {
        printf("\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (1 to %d): ", n+1);
                scanf("%d", &pos);
                for(i = n; i >= pos; i--)
                    arr[i] = arr[i-1];
                arr[pos-1] = element;
                n++;
                break;
            case 2:
                printf("Enter element to delete: ");
                scanf("%d", &element);
                for(i = 0; i < n; i++) {
                    if(arr[i] == element) {
                        for(int j = i; j < n-1; j++)
                            arr[j] = arr[j+1];
                        n--;
                        break;
                    }
                }
                break;
            case 3:
                printf("Array elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
        }
    } while(choice != 4);
    
    return 0;
}
