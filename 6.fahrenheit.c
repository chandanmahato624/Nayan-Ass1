#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    // Reads temperature in fahrenheit
    printf("\nEnter temperature in Fahrenheit:");
    scanf("%f", &fahrenheit);

    // Fahrenheit to celsius conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;
    // Print the result
    printf("\nCelsius = %.3f", celsius);

    // OUTPUT
    // Enter temperature in Fahrenheit:40

    // Celsius = 4.444
}