#include<stdio.h>
void main(){
	int i,j,n,sp;
	printf("Enter the lines to print: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(sp=1;sp<=n-i;sp++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
