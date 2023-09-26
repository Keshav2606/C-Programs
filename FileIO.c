#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr = fopen("TEST.txt","r");
    int a;
	fscanf(fptr,"%d",&a);
	int b;
	fscanf(fptr,"%d",&b);
	fclose(fptr);
	fptr= fopen("TEST.txt", "a");
	int sum= a+b;
	fprintf(fptr,"\n Sum is = %d",sum);
	fclose(fptr);

	return 0;
}
