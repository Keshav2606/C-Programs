#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
}node;
struct node *create();
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);

int main(){
    struct node *root;
    root = create();
    printf("\nPreOrder: ");
    preorder(root);
    printf("\nInOrder: ");
    inorder(root);
    printf("\nPostOrder: ");
    postorder(root);
    return 0;
}

struct node *create(){
    struct node *p;
    int x;
    printf("\nEnter data(-1 for no data):");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    p = (struct node*)malloc(sizeof(struct node));
    p->data = x;
    printf("\nEnter left child of %d",x);
    p->left = create();
    printf("\nEnter right child of %d",x);
    p->right = create();
    return p;
}

void preorder(struct node *root){
    if(root != NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}