#include <stdio.h>

int main()
{

    int s = 6;
    int arr[6] = {8, 9, 1, 10, 3, 2};

    for (int i = 0; i < s; i++)
    {
        printf("%d ->", arr[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    for (int j = 0; j < s - 1; j++)
    {
        for (int i = 0; i < s - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");

    for (int i = 0; i < s; i++)
    {
        printf("%d ->", arr[i]);
    }

    return 0;
}