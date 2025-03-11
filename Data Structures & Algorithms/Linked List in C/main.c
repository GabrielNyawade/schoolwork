#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node* next;
};

struct node* start = NULL;

void insert_at_start(struct node** headref, int data)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node->next = *headref;
    new_node->number = data;
    *headref = new_node;
}

void insert_at_end(struct node** headref, int data)
{
    struct node* new_node = malloc(sizeof(struct node));
    struct node* ptr = *headref;
    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = new_node;
    new_node->number = data;
    new_node->next = NULL;
}

void display_list(struct node* head)
{
    for (struct node* ptr = head; ptr != NULL; ptr = ptr->next)
        printf("%d->", ptr->number);
    printf("NULL\n");
}

int main()
{
    for (int i = 0; i < 10; i++)
        insert_at_start(&start, i);
    insert_at_end(&start, -1);
    display_list(start);
    return 0;
}
