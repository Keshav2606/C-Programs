#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("Enter the Number: ");
	scanf("%d\n",&n);
	return 0;
}
   int fact(int n)
   {
   	if(n==2){
   		return 2;
	   }
	   if(n==1){
	   	return 1;
	   }
   	int factNm1=fact(n-1);
   	int factNm=factNm1*n;
   	return factNm;
   }
