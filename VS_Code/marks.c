#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void display_array(int array[], int len);
int max_value(int array[], int len);
int min_value(int array[], int len);

int main()
{
    int nums[12] = {12, 67, 5, 32, 40, 63, 121, 93, 38, 17, 26, 81};
    int length_nums = sizeof(nums) / sizeof(int);
    display_array(nums, length_nums);
    int max = max_value(nums, length_nums);
    printf("Maximum value = %d\n", max);
    int min = min_value(nums, length_nums);
    printf("Minimum value = %d\n", min);
    return 0;
}

void display_array(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Index = %d: Value = %d\n", i, array[i]);
    }
}

int max_value(int array[], int len)
{
    int max_val = array[0];
    for (int i = 1; i < len; i++)
    {
        if (array[i] > max_val)
            max_val = array[i];
    }

    return max_val;
}

int min_value(int array[], int len)
{
    int min_val = array[0];
    for (int i = 1; i < len; i++)
    {
        if (array[i] < min_val)
            min_val = array[i];
    }
    return min_val;
}