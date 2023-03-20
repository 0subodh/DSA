#include <stdio.h>

int choice, stack[10], top, element;

void menu();
void push();
void pop();
void showelements();

void main()
{
    choice = element = 1;
    top = 0;
    menu();
}

void menu()
{
    printf("Enter your choice: \n");
    printf("1. push\n2. pop \n3. show elemnts \n4. exit");
    scanf("%d", &choice);
    if (choice == 1)
    {
        push();
        menu();
    }
    else if (choice == 2)
    {
        pop();
        menu();
    }
    else if (choice == 3)
    {
        showelements();
        menu();
    }
}

void push()
{
    if (top <= 9)
    {
        printf("Enter the element to be pushed into stack: \n");
        scanf("%d", &element);
        stack[top] = element;
        ++top;
    }
    else
    {
        printf("Stack is full \n");
    }
    return;
}

void pop()
{
    if (top > 0)
    {
        --top;
        element = stack[top];
        printf("The popped element is %d \n", element);
    }
    else
    {
        printf("Stack is empty\n");
    }
    return;
}

void showelements()
{
    if (top <= 0)
        printf("Stack is empty \n");
    else
    {
        for (int i = 0; i < top; ++i)
            printf("%d\n", stack[i]);
    }
}