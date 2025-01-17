#include <stdio.h>
#include <stdlib.h>
void change(int *arr, int size, int *s)
{
    *s = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] += 100;
        *s += arr[i];
    }
}

int main()
{
    int *a;

    for (int i = 0; i < 5; i++)
    {
        a = (int *)malloc(sizeof(int) * 1000000);
        // printf()
    }

    free(a);

    return 0;
}
