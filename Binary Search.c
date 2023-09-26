#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter the Elements of the array:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int low=0,high=9,mid,e;
	printf("Enter Element you are searching for:");
	scanf("%d",&e);
	while(low<=high){
		mid=(low+high)/2;
		if(e==a[mid]){
		printf("Required Element is found at %dth Position",mid);
		break;
		}else if(e>a[mid]){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return 0;
}
