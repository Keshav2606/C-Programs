#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *head, *top, *p, *q;

void push();
void pop();
void display();

void main()
{
    head = NULL;
    top = NULL;
    int n;
    do
    {
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. Display");
        printf("\nEnter Your Choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    } while (n > 0 || n <= 3);
}

void push()
{
    p = malloc(sizeof(struct stack));
    printf("Enter data:");
    scanf("%d", &p->data);
    if (head == NULL)
    {
        head = p;
        head->next = NULL;
        top = p;
    }
    else
    {
        p->next = top;
        top = p;
    }
}

void pop()
{
    if (head == NULL)
    {
        printf("\nStack is Empty");
    }
    else
    {
        q = top;
        top = q->next;
        q->next = NULL;
        free(q);
    }
}

void display()
{
    q = top;
    printf("%d ", q->data);
    while (q->next != NULL)
    {
        q = q->next;
        printf("%d ", q->data);
    }
}