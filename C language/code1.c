#include <stdio.h>

int sum(int x,int y){
    return x+y;
}

int main() {
        int first , second;

        printf("Enter Number: ");
        scanf("%d",&first);
        printf("Enter Number: ");
        scand("%d",&second);
        printf("sum=%d\n",sum(first,second));

        return 0;
}