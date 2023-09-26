#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct stack{
    int a[SIZE];
    int top;
}s;

int full();
int empty();
void push();
void pop();
void display();

void main(){
    s.top=-1;
    int n;
    do{
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. DISPLAY");
    printf("\nEnter Your Choice: ");
    scanf("%d",&n);
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
    }while(n>0 && n<=3);
}

int full(){
    if(s.top == SIZE-1){
        return 1;
    }else{
        return 0;
    }
}

int empty(){
    if(s.top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(){
    int x;
    if(full()==1){
        system("cls");
        printf("\nStack Overflow");
    }else{
        printf("Enter data:");
        scanf("%d",&x);
        s.top++;
        s.a[s.top] = x;
    }
}

void pop(){
    if(empty()==1){
        system("cls");
        printf("\nStack Underflow");
    }else{
        s.top--;
    }
}

void display(){
    system("cls");
    if(empty()==1){
        system("cls");
        printf("\nStack Underflow");
    }else{
        int i;
        for(i=s.top;i>=0;i--){
            printf("%d ",s.a[i]);
        }
    }
}