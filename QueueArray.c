#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct queue{
    int a[SIZE];
    int front,rear;
}q;

void enqueue();
void dequeue();
void display();

void main(){
    q.front=0;
    q.rear=-1;
    int n;
    do{
    printf("\n1. ENQUEUE");
    printf("\n2. DEQUEUE");
    printf("\n3. DISPLAY");
    printf("\nEnter Your Choice: ");
    scanf("%d",&n);
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
    }while(n>0 && n<=3);
}

void enqueue(){
    if(q.front == 0 && q.rear == SIZE-1){
        printf("\nQueue Overflow");
    }else{
        int x;
        printf("\nEnter data: ");
        scanf("%d",&x);
        q.rear++;
        q.a[q.rear]=x;
    }
}

void dequeue(){
    if(q.front > q.rear){
        printf("\nQueue Underflow");
    }else{
        q.front++;
    }
}

void display(){
     if(q.front > q.rear){
        printf("\nQueue Underflow");
    }else{
        for(int i=q.front;i<=q.rear;i++){
            printf("%d ",q.a[i]);
        }
    }
}