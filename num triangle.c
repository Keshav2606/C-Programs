#include<stdio.h>
void main(){
	int i,j,sp,n;
	printf("Enter the Lines to Print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(sp=1;sp<=n-i;sp++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
