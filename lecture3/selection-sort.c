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

    for (int i = 0; i < s; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != 1)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

        for (int k = 0; k < s; k++)
        {
            printf("%d ->", arr[k]);
        }
        printf("\n");
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