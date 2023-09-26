#include<stdio.h>
void main()
{
    int i,n,sum=0;
	printf("Enter the Value of n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
    	printf("%d\n",sum);
    for(i=n;i>=1;i--){
    	printf("%d\n",i);
	}
}
