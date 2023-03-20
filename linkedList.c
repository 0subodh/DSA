#include <stdio.h>
#include <stdlib.h>

// structure to create a linked list
typedef struct node
{
    int data;
    struct node *next;
} node;

node *createLinkedList(int n);
void displayList(node *head);
int count(node *head);
node *insertAtBeginning(node *head);
void insertAtEnd(node *head);

int main()
{
    int n = 0;
    node *HEAD = NULL;
    printf("\n How many nodes: ");
    scanf("%d", &n);
    HEAD = createLinkedList(n);
    HEAD = insertAtBeginning(HEAD);
    insertAtEnd(HEAD);
    displayList(HEAD);
    printf("\n The number of elements in list is %d", count(HEAD));
    printf("\n");

    return 0;
}

node *createLinkedList(int n)
{
    int i = 0;
    node *head = NULL; // to store address of first node
    node *temp = NULL; // to create individual node
    node *p = NULL;    // to iterate through the list

    for (i = 0; i < n; i++)
    {
        // creating individual isolated node
        temp = (node *)malloc(sizeof(node));
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;

        if (head == NULL)
        {
            // if list is empty make temp as the first node
            head = temp;
        }
        else
        {
            p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

void displayList(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf("\t%d ->", p->data);
        p = p->next;
    }
    printf("\tNULL");
}

int count(node *head)
{
    if (head->next == NULL)
        return 0;
    else
        return (1 + count(head->next));
}

node *insertAtBeginning(node *head)
{
    node *temp = NULL;
    temp = (node *)malloc(sizeof(node));
    printf("Enter data you want to insert at beginning of node: ");
    scanf("%d", &(temp->data));
    temp->next = head;
    head = temp;
    return head;
}

void insertAtEnd(node *head)
{
    node *p = NULL;
    node *temp = NULL;
    temp = (node *)malloc(sizeof(node));
    printf("Enter data you want to insert at end of node: ");
    scanf("%d", &(temp->data));
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
}