#include <stdio.h>

int main() {
    float basic, HRA, TA, IT, gross, net;
    
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);
    
    HRA = 0.10 * basic;
    TA = 0.05 * basic;
    IT = 0.025 * basic;
    
    gross = basic + HRA + TA;
    net = gross - IT;
    
    printf("Gross Salary = %.2f\n", gross);
    printf("Net Salary = %.2f\n", net);
    
    return 0;
}
