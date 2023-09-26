#include<stdio.h>
#define Max(A,B,C) (A>B)?(A>C?A:C):(B>C?B:C)
#define Sum(a,b,c) a+b+c
int main()
{
	int num1,num2,num3;
	scanf("%d%d%d",&num1,&num2,&num3);
	int greater = Max(num1,num2,num3);
	int sum = Sum(num1,num2,num3);
	printf("%d",greater);
}
