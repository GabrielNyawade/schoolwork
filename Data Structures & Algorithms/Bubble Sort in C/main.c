#include <stdio.h>
#include <stdlib.h>
#define n 11

int main()
{
    int i, j, temp;
    int arr[n] = {3, 5, 13, 2, 7, 9, 15, 8, 4, 11, 19};
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
