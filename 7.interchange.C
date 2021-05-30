#include <stdio.h>
int main()
{
    double C, D, temp;
    printf("Enter C values : ");
    scanf("%lf", &C);
    printf("Enter D values : ");
    scanf("%lf", &D);

    // Value of first is assigned to temp
    temp = C;

    // Value of second is assigned to first
    C = D;

    // Value of temp (initial value of first) is assigned to second
    D = temp;

    printf("\nAfter interchange C = %.2lf\n", C);
    printf("After interchange D = %.2lf", D);
    return 0;

    //       OUTPUT
    //       Enter C values : 22
    // Enter D values : 11

    // After interchange C = 11.00
    // After interchange D = 22.00
}
