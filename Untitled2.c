#include <stdio.h>
#include<math.h>
void main(){
    int num,r,sum,temp;
    int r1,r2;

    printf("Input Range: ");
    scanf("%d%d",&r1,&r2);
    printf("Armstrong Numbers in a given Range are : ");
    for(num=r1;num<=r2;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+pow(r,3);
         }
         
         if(sum==num){
		  printf("%d\n",num);
      }
    }
}
