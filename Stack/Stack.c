#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};


void main()
{
    struct stack *top=NULL, *p;
    int ch;    
    do
    {
        printf("\n1. Push\n2. Pop\n3. Display\n");
        printf("\nEnter Your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (top == NULL)
            {
                top=(struct stack*)malloc(sizeof(struct stack));
                printf("\nEnter Data: ");
                scanf("%d",&top->data);
                top->next=NULL;
            }
            else
            {
                p=(struct stack*)malloc(sizeof(struct stack));
                printf("Enter Data: ");
                scanf("%d", &p->data);
                p->next=top;
                top=p;
            }
            break;
        case 2:
            if (top == NULL)
            {
                printf("\n Underflow");
            }
            else
            {
                p=top;
                printf("Deleted item is %d", p->data);
                top = top->next;
                free(p);
            }
            break;
        case 3:
        system("cls");
            if (top ==NULL)
            {
                printf("Nothing to display");
            }

            else
            {
                p=top;
                while (p!=NULL)
                {
                    printf("Element: %d\n",p->data);
                    p=p->next;
                }
                
            }
            break;

        default:
            printf("\n Invalid choice");
            break;
        }
    } while (ch == 1 || ch == 2 || ch == 3);
}