#include<stdio.h>
#include<stdlib.h>

struct queue{
    int data;
    struct queue *next;
}*front,*rear,*p,*q;

void enqueue();
void dequeue();
void display();

void main(){
    front = NULL;
    rear = NULL;
    int n;
    do
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\nEnter Your Choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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

void enqueue(){
    p = malloc(sizeof(struct queue));
    printf("Enter data:");
    scanf("%d",&p->data);
    p->next=NULL;
    if(front == NULL){
        front = p;
        rear = p;
    }else{
        rear->next=p;
        rear = p;
    }
}

void dequeue(){
    p = front;
    if(front == NULL){
        printf("\nQueue is Empty");
    }else{
        front = p->next;
        p->next = NULL;
        free(p);
    }
}

void display(){
    p= front;
    printf("%d ",p->data);
    while(p->next!=NULL){
        p=p->next;
        printf("%d ",p->data);
    }
}