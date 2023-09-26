#include<stdio.h>
void main()
{
	float num1,num2,result;
	char op;
	printf("Enter the Operators");
	scanf("%c",&op);
	printf("Enter the Numbers");
	scanf("%f%f",&num1,&num2);
	switch(op)
	{
		case '+':
			result=num1+num2;
			printf("Result is %f",result);
			break;
		case '-':
			result=num1-num2;
			printf("Result is %f",result);
			break;
		case '*':
			result=num1*num2;
			printf("Result is %f",result);
			break;
		case '/':
			result=num1/num2;
			printf("Result is %f",result);
			break;
		default:
			printf("Error");
	}
}
