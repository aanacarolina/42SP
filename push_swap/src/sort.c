#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *bubbleSort(int *arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        int j = 0;
        printf("size - %i\n", size);
        printf("arr[i] > %d\n", arr[i]);
        while (j < size - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            j++;
        }
        i++;
    }
    return arr;
}


