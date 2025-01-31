#include <stdio.h>

int f(int x)
{
    printf("%d\n", x);
    return f(x + 1);
}

int main()
{
    int tmp = f(7);

    return 0;
}