#include <stdio.h>

// definition of linear list
typedef struct
{
    int data[10];
    int count;
} list;

// prototype functions
void insert(list *, int, int);
void create(list *);
void traverse(list *);
void deleteList(list *, int);
void displayMenu();

// definition of insert function
void insert(list *start, int position, int element)
{
    int temp = start->count;
    while (temp >= position)
    {
        start->data[temp + 1] = start->data[temp];
        temp--;
    }
    start->data[position] = element;
    ++start->count;
}

// definition of create function to read data values into the list
void create(list *start)
{
    int i = 0, test = 1;
    while (test)
    {
        fflush(stdin);
        printf("\n Input value for %d: (0 to come out) ", i);
        scanf("%d", &start->data[i]);
        if (start->data[i] == 0)
            test = 0;
        else
            i++;
    }
    start->count = i;
}

// output function to print on the console
void traverse(list *start)
{
    int i;
    for (i = 0; i < start->count; i++)
    {
        printf("\n Value at position %d is %d ", i, start->data[i]);
    }
}

// definition of delete function
void deleteList(list *start, int position)
{
    int temp = position;
    printf("\nElement which is to be deleted is %d ", start->data[position]);
    while (temp <= start->count - 1)
    {
        start->data[temp] = start->data[temp + 1];
        temp++;
    }
    start->count = start->count - 1;
}

// displayMenu function declaration
void displayMenu()
{
    printf("Enter your choice:\n");
    printf("1. To create a list\n");
    printf("2. To traverse the list\n");
    printf("3. To add item to the list\n");
    printf("4. To delete an item from the list\n");
}

// main function
int main()
{
    int position, element, choice, dPosition;
    list l;
    create(&l);
    printf("Entered list is as follows: \n");
    fflush(stdin);
    traverse(&l);
    fflush(stdin);
    printf("\nEnter the position where you want to add next data item: ");
    scanf("%d", &position);
    fflush(stdin);
    printf("\nEnter the value for the position: ");
    scanf("%d", &element);
    insert(&l, position, element);
    printf("\nInput the position of the element which you want to delete: ");
    scanf("%d", &dPosition);
    fflush(stdin);
    deleteList(&l, dPosition);
    printf("\n");
    return 0;
}
