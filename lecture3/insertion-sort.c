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
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // replace the right with the left value
            j--;
        }

        arr[j + 1] = key;
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