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

int insert_at_begin()
{
}

int insert_at_end(Node *h, int value)
{
    while (h == NULL)
    {
        h = h->ref;
    }

    Node *tmp = (Node *)malloc(sizeof(Node));
    tmp->data1 = value;
    h = tmp;
}

void print_list(Node *h)
{
    while (h != NULL)
    {
        printf("%d", h->data1);
        h = h->ref;
    }
}

int main()
{
    Node *head;
    head = NULL;
    for (int i = 0; i < 100; i++)
    {
        insert_at_end(head, (i + 1) * 10);
    }

    return 0;
}