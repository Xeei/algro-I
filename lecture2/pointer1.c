#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c[5] = {1, 2, 3, 4, 5};

    //? * this block need to be adress of int
    //? ** this block need to be adress of address of int

    // int *p = &a;
    // int **pp = &p;
    // printf("%p\n", &a); // adress of a
    // printf("%p\n", p);  // value of *p -> value of p is adress if a
    // printf("%p\n", &p); // adress of *p

    // printf("%p\n", pp); // value if **p -> value if pp is adress of *p

    for (int i = 0; i < 5; i++)
    {
        printf("%p -----> %d i:%d\n", &c[i], c[i], i);
    }

    printf("--------------------\n");
    printf("%p\n", c);
    printf("%p\n", c + 3);

    return 0;
}