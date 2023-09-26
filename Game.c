#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void _result(char you, char comp);
int main()
{
	char you,comp;
	int d=2500;
	printf("Enter 's' for Scissor, 'p' for Paper, 'r' for Rock\n");
	while(1){
	srand(time(0));
	int num=rand()%100+1;
	if(num<=33){
		comp='s';
	}else if(num>33&&num<=66){
		comp='p';
	}else{
		comp='r';
	}
	scanf("%c",&you);
	_result(you,comp);

	printf("You choose %c and Computer choose %c\n",you,comp);

	Sleep(d);
	system("cls");
}
return 0;
}
void _result(char you, char comp){
	if(you==comp){
		printf("Match Drawn\n");
	}else if(you=='s' && comp=='p'){
		printf("Hurray! You are the Winner\n");
	}else if(you=='s' && comp=='r'){
		printf("Sorry! You Lose this Match.\nBetter Luck next time\n");
	}else if(you=='p' && comp=='s'){
		printf("Sorry! You Lose this Match.\nBetter Luck next time\n");
	}else if(you=='p' && comp=='r'){
		printf("Hurray! You are the Winner\n");
	}else if(you=='r'&&comp=='s'){
		printf("Hurray! You are the Winner\n");
	}else if(you=='r'&&comp=='p'){
		printf("Sorry! You Lose this Match.\nBetter Luck next time\n");
	}
}
