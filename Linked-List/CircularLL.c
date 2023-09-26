#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*last,*p,*q;

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
    last = NULL;
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
    } while (n >0 && n<=8);
}

void insertAtFront(){
    p = malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&p->data);
    p->next=NULL;
    if(last==NULL){
       last = p;
    }else{
        p->next = last->next;
        last->next = p;
    }
}