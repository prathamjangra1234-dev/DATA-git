#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2;
    
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    D = b*b - 4*a*c;
    
    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are %.2f and %.2f\n", root1, root2);
    } else if(D == 0) {
        root1 = -b / (2*a);
        printf("Roots are equal: %.2f\n", root1);
    } else {
        printf("Roots are complex.\n");
    }
    
    return 0;
}
