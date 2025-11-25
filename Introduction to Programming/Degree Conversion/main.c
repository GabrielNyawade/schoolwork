#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, celsius;
    printf("Convert Fahrenheit to Celsius\n");
    printf("Enter degree value in Fahrenheit >>> ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f F = %.2f C\n", fahrenheit, celsius);

    return 0;
}
