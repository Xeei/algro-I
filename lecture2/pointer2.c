#include <stdio.h>

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
    int a = 10;
    int b = 20;
    int c[5] = {1, 2, 3, 4, 5};
    int s = 0;

    //? * this block need to be adress of int
    //? ** this block need to be adress of address of int

    // int *p = &a;
    // int **pp = &p;
    // printf("%p\n", &a); // adress of a
    // printf("%p\n", p);  // value of *p -> value of p is adress if a
    // printf("%p\n", &p); // adress of *p

    // printf("%p\n", pp); // value if **p -> value if pp is adress of *p

    change(c, 5, &s);

    for (int i = 0; i < 5; i++)
    {
        printf("%p -----> %d i:%d\n", &c[i], c[i], i);
    }

    printf("--------------------\n");
    printf("%p\n", c);
    printf("%p\n", c + 3);
    printf("--------------------\n");

    printf("%d\n", s);

    return 0;
}