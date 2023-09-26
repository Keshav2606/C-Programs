#include<stdio.h>
void main()
{
	int n,n1=0,n2=1,n3,i;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\n",n3);
	}
}
