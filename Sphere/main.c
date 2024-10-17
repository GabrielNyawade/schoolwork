#include <stdio.h>
#include <stdlib.h>

const float pi = 3.142;
void get_surf_area(float r);
void get_volume(float r);
int main()
{

    float radius;
    printf("Enter radius -> ");
    scanf("%f", &radius);

    get_volume(radius);
    get_surf_area(radius);

    return 0;
}

void get_volume(float r)
{
    float volume = pi * (r*r*r) * 4/3;
    printf("Volume: %.3f\n", volume);

}

void get_surf_area(float r)
{
    float area = pi * (r*r) * 4;
    printf("Surface area: %.3f\n", area);
}
