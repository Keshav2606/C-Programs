#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter the Lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=n;k>=i;k--)
			printf(" ");
		
		for(j=1;j<=i;j++)
			printf("*");
		
	}
		printf("\n");
	
}
