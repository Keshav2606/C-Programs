#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the Lines to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
				printf("%d",i);
			}
			for(i=i+1;i>=1;i--){
				for(j=i+1;j<=n;j++){
					printf("%d",i);
				}
			}
		
		printf("\n");
}
}
