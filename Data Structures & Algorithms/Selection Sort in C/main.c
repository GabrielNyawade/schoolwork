#include <stdio.h>
#include <stdlib.h>
#define n 11
int main()
{
    int i, j, temp;
    int arr[n] = {3, 5 ,9, 4, 7, 13, 2, 19, 15, 12, 1};
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("After sorting is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
