#include <stdio.h>
#include <stdlib.h>

# define pi 3.142

int main()
{
    // const float pi = 3.142;
    float radius, area;
    printf("This is a program to calculate the area of a circle.\n\tInput radius >>> ");
    scanf("%f", &radius);
    area = pi * radius * radius * 4/3;
    printf("The area of a circle radius %.4f is %.4f\n", radius, area);
    return 0;
}
