#include<stdio.h>
void fibonacci(int);
int main()
{
	int limit;
	printf("Enter the number of terms to be printed\n");
	scanf("%d",&limit);
	fibonacci(limit);
	return 0;
}
  void fibonacci(int num)
  {
  	int n1=0,n2=1,n3,i;
  	printf("%d\n%d\n",n1,n2);
  	for(i=2;i<=num;i++){
  	n3=n1+n2;
  	n1=n2;
  	n2=n3;
  	printf("%d\n",n3);
  }
    return n3;
}
