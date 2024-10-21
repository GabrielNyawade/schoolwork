#include <stdio.h>
#include <stdlib.h>


int main()
{
    char adm[16];
    char name[16];
    int math, phy, comp;

    printf("Enter your admission number and surname.\n");
    printf("Admission Number: ");
    scanf("%s", &adm);
    printf("Surname: ");
    scanf("%s", &name);

    printf("Enter marks for Math, Physics and Computer.\n");
    printf("Math >>> ");
    scanf("%d", &math);
    printf("Physics >>> ");
    scanf("%d", &phy);
    printf("Computer >>> ");
    scanf("%d", &comp);

    float average = (math + phy + comp) / 3;
    printf("Admission Number: %s\n", adm);
    printf("Surname: %s\n", name);
    printf("Your average is %.2f\n", average);

    // Grading
    if (average >= 70) // A
    {
        printf("Grade: A");
    }
    else if (average >= 60) // B
    {
        printf("Grade: B");
    }
    else if (average >= 50)
    {
        printf("Grade: C");
    }
    else if (average >= 40)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
