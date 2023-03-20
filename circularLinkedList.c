#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list clist;

// function declarations
void create_clist(clist *);
int count(clist *);
void traverse(clist *);

clist *head, *s;

void main()
{
    head = (clist *)malloc(sizeof(clist));
    s = head;
    create_clist(head);
    printf("\n Traversing the created list with starting address %u\n ", head);
    traverse(head);
    printf("the number of elements in the list is %d\n", count(head));
}

void create_clist(clist *start)
{
    printf("Enter 111 for exiting loop\n");
    scanf("%d", &start->data);
    if (start->data == 111)
        start->next = s;
    else
    {
        start->next = (clist *)malloc(sizeof(clist));
        create_clist(start->next);
    }
}

void traverse(clist *start)
{
    
}