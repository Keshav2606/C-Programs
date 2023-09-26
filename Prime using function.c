#include<stdio.h>
void prime(int);
int main()
{
    int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	prime(num);	
	return 0;
}
void prime(int num)
{
	int i,count=0;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			count=1;
		}
	}
		if(count==0){
			printf("%d is Prime Number",num);
		}else{
			printf("%d is not a Prime Number",num);
		}
	
}
