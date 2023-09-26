#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	puts("Enter the String:");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0){
		puts("String is Palindrome");
	}else{
		puts("String is not Palindrome");
	}
}
