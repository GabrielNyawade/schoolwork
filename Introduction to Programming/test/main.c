#include <stdio.h>
#include <stdlib.h>


int main()
{
    float fahrenheit;
    printf("Enter degrees Fahrenheit >>> ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit-32) * 5/9;
    printf("%.2f F = %.2f C", fahrenheit, celsius);

    return 0;
}
