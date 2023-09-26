#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of array:\n");
	for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp= a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
		
}