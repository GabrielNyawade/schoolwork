#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NUMBER 80
struct Employees
{
    int number;
    char name[50];
    int basic_pay;
};


int main(int argc, char const *argv[])
{
    struct Employees employee[MAX_NUMBER];
    char answer;
    int i = 0;
    do
    {
        employee[i].number = i + 1;
        printf("Enter the name of employee %d: ", i + 1);
        fgets(employee[i].name, 50, stdin);
        int len = strlen(employee[i].name);
        employee[i].name[len-1] = '\0';
        printf("Enter the basic pay of employee %d: ", i + 1);
        scanf("%d", &employee[i].basic_pay);
        i++;
        printf("Would you like to add another employee? (Y for yes, any other key for no): ");
        scanf(" %c", &answer);
        getchar();
    }
    while (answer == 'Y' || answer == 'y' && i < MAX_NUMBER);
    printf("ID\tName\t\t\tBasic Pay\tDA\t\tCCA\tGross Salary");
    printf("\n===========================================================================================\n");
    for (int j = 0; j < i; j++)
    {
        float da = employee[j].basic_pay * 0.51;
        int cca = 1000;
        float gross_sal = employee[j].basic_pay + da + cca;
        printf("%d\t%s\t\t%-6d\t\t%.2f\t%d\t%.2f\n", employee[j].number, employee[j].name, employee[j].basic_pay, da, cca, gross_sal);
    }
    return 0;
}
