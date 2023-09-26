#include <stdio.h>
int main()
{
	int n,i,factorial;
	printf("Enter N = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		factorial=factorial*i;
	}
	printf("%d\n",factorial);
	return 0;
}
