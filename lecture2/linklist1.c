#include <stdio.h>
#include <stdlib.h>

// Node
typedef struct Node
{
    int data;
    int data1;
    int data2;
    struct Node *ref;
} Node;

int main()
{

    Node a;
    Node b;
    Node c[100];

    a.data = 10;
    b.data = 20;

    printf("%d\n", a.data);
    printf("%d\n", b.data);

    for (int i = 1; i < 100; i++)
    {
        c[i].data = i;
        c[i].data1 = 100 - i;
    }

    printf("%d\n", c[39].data1);
    printf("%d\n", c[39].data1);

    return 0;
}