#include<stdio.h>
void main()
{
	int i,j,sp,n;
	printf("Enter the lines to print : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(sp=1;sp<=n-i;sp++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
		printf("*");
	}
		printf("\n");
		
	}
}
