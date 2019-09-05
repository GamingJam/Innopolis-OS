#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int value;
    struct node * next;
} node;

typedef struct linkedlist
{
    node * next;
} linkedlist;

void  delete(linkedlist * root, int value)
{
    node * current = root->next;
    node * previous = root->next;
    while (current->value != value)
    {
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    free(current);
}

void insert(linkedlist * root, int value)
{
    node * new = malloc(sizeof(node));
    new->value = value;
    new->next = root->next;
    root->next = new;
}

void initialize(linkedlist * root)
{
    root->next = NULL;
}

void print(linkedlist * root)
{
    node * current = root->next;
    while (current != NULL)
    {
        printf("%d\n", current->value);
        current = current->next;
    }
}

int main()
{
    linkedlist * list = malloc(sizeof(linkedlist));

    initialize(list);

    insert(list, 3);
    insert(list, 10);
    insert(list, 2);
    insert(list, 5);
    insert(list, 1);
    delete(list, 5);
    print(list);
}