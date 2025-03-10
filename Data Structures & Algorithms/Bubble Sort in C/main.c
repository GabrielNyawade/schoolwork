#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, arr[64], n, temp;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
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
