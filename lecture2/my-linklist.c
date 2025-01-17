#include <stdio.h>
#include <stdlib.h>

// Node
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void print_list(Node *h)
{
    while (h != NULL)
    {
        printf("[%p]:%d -> %p\n", h, h->data, h->next);
        h = h->next;
    }
}

void insert_at_end(Node **head_ref, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    Node *last = *head_ref; // Used to traverse the list

    new_node->data = new_data; // Assign data to new node
    new_node->next = NULL;     // This new node will be the last node

    if (*head_ref == NULL)
    { // If the Linked List is empty, then make the new node as head
        *head_ref = new_node;
        return;
    }

    // Otherwise, traverse to the last node
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node; // Change the next of last node
}

int main()
{
    Node *head;

    head = NULL;

    for (int i = 0; i < 100; i++)
    {
        insert_at_end(&head, i);
    }

    print_list(head);

    return 0;
}