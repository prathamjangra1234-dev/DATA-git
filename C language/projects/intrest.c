#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    float si, ci;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time (in years): ");
    scanf("%f", &t);


    si = (p * r * t) / 100;


    ci = p * pow((1 + r / 100), t);

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;
}
