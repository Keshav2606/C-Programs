#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n-1;j++){
			if(a[j+1]<a[j]){
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}

		}
		
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}