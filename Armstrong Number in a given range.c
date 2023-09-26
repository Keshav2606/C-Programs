#include <stdio.h>
void main(){
    int num,r,sum,temp;
    int r1,r2;

    printf("Input starting number of range: ");
    scanf("%d",&r1);

    printf("Input ending number of range : ");
    scanf("%d",&r2);
    printf("Armstrong numbers in given range are: ");
    for(num=r1;num<=r2;num++){
         temp=num;
         sum = 0;
         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}

