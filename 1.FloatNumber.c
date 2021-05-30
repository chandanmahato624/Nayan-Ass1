#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the first number : ");
    scanf("%f",&a);
    printf("Enter the second number : ");
    scanf("%f",&b);

    printf("%f",a);
    printf(" / %f",b);
    printf(" = %f",(a/b));

    // OUTPUT 
    // Enter the first number : 4.5
    // Enter the second number : 2.3
    // 4.500000 / 2.300000 = 1.956522

}