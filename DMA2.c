#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr;
  // int n;
   //printf("Enter the size:");
  // scanf("%d",&n);
   ptr = (int *) calloc(5, sizeof(int));
   
    printf("Enter 5 odd Numbers:\n");
    for(int i=0;i<5;i++){
   scanf("%d",&ptr[i]);
   }
   
  
   ptr = realloc(ptr, 6);
   printf("Enter 6 even Numbers:\n");
   for(int i=0;i<6;i++){
   scanf("%d",&ptr[i]);
   }
    printf("Result:\n");
    for(int i=0;i<6;i++){
   printf("%d\n",ptr[i]);
   }
     
  return 0;
}