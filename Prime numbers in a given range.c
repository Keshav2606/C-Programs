#include<stdio.h>
void main()
{
	int r1,r2,count=0,i,n;
	printf("Enter the Range: ");
	scanf("%d%d",&r1,&r2);
	printf("Prime Numbers in a given Range are :\n");
	for(n=r1;n<=r2;n++){
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				count=1;
			}
			if(count==0){
				printf("%d\n",n);
			}
		}
	}
}
