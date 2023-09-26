#include<stdio.h>
int main()
{
	
	int i,a[6],e;
	printf("Enter Elements of array:\n");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	printf("Which Element you are searching for:");
	scanf("%d",&e);
	for(i=0;i<6;i++){
		if(a[i]==e){
			printf("Required Element is found at %dth Position",i);
		}
	}
	
	
	return 0;
}
