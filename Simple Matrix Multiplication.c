#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3];
	printf("Enter the Elements of Matrix a:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Elements of Matrix b:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int k,c[3][3],sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				sum=sum+(a[i][k]*b[k][j]);
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",c[i][j]);
			printf("   ");
		}
		printf("\n");
	}
	
	
	return 0;
}
