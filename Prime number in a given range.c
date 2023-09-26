#include<stdio.h>
void main()
{
	int n1=1,n2=500,i;
	for(i=n1;i<n2;i++){
		if(i%(i/2)!=0){
			printf("%d\n",i);
		}
	}
}
