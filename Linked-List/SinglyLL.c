#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *p, *q;

void insertAtFront();
void insertAtEnd();
void insertAtSpecific();
void insertinSorted();
void delFromFront();
void delFromEnd();
void delFromSpecific();
void traversal();

void main()
{
    head = NULL;
    int n;
    do
    {
        printf("\n1. Insert at Front");
        printf("\n2. Insert at End");
        printf("\n3. Insert at Specific");
        printf("\n4. Inserted in Sorted");
        printf("\n5. Delete from Front");
        printf("\n6. Delete from End");
        printf("\n7. Delete from Specific");
        printf("\n8. Traversal / Display");
        printf("\nEnter Your Choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertAtFront();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtSpecific();
            break;
        case 4:
            insertinSorted();
            break;
        case 5:
            delFromFront();
            break;
        case 6:
            delFromEnd();
            break;
        case 7:
            delFromSpecific();
            break;
        case 8:
            system("cls");
            traversal();
            break;
        default:
            printf("\n Invalid Choice");
        }
    } while (n > 0 && n <= 8);
}

void insertAtFront()
{
    p = malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d", &p->data);
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}

void insertAtEnd()
{
    p = malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &p->data);
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
}

void insertAtSpecific()
{
    int loc;
    p = malloc(sizeof(struct node));
    printf("Enter location: ");
    scanf("%d", &loc);
    printf("Enter data: ");
    scanf("%d", &p->data);
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        q = head;
        for (int i = 1; i < loc - 1; i++)
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
}

void insertinSorted()
{
    p = malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &p->data);
    p->next = NULL;
    struct node *r = head;
    q = head;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        while (r->data < p->data)
        {
            r = r->next;
            if(r->next == NULL){
                
            }
        }
        while (q->next != r){
            q = q->next;
        }        
        p->next = q->next;
        q->next = p;
    }
}

void delFromFront()
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        q = head;
        head = q->next;
        q->next = NULL;
        free(q);
    }
}

void delFromEnd()
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        p = head;
        while (p->next != q)
        {
            p = p->next;
        }
        p->next = NULL;
        q->next = NULL;
        free(q);
    }
}

void delFromSpecific()
{
    int loc, i;
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        printf("Enter location: ");
        scanf("%d", &loc);
        q = head;
        for (i = 1; i <= loc - 1; i++)
        {
            q = q->next;
        }
        p = head;
        while (p->next != q)
        {
            p = p->next;
        }
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
}

void traversal()
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        q = head;
        printf("Element:%d ", head->data);
        while (q->next != NULL)
        {
            q = q->next;
            printf("%d ", q->data);
        }
    }
}
