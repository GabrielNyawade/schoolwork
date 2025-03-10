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
