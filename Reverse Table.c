#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=10;i>=1;i--){
		printf("%d x %d =%d\n",n,i,n*i);
	}
}
