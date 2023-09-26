#include<stdio.h>
int main()
{
	int i,n;
	int count=0;
	printf("Enter the Number = ");
	scanf("%d",&n);
	for(i=2;i<n/2;++i){
		if(n%i==0){
			count=1;
			break;
		}
		
	}
	if(count==0){
			printf("The Number is prime");
		}else{
			printf("The Number is not prime");
		}
    
	return 0;
}
