#include<stdio.h>
#include<windows.h>
int main()
{
	int h,m,s,d=1000;
	printf("Set the time:\n");
	scanf("%d\n%d\n%d",&h,&m,&s);
	if(h<0||h>12||m<0||m>60||s<0||s>60){
		printf("Error\n");
		exit(0);
	}else{
		while(1){
			s+=1;
			if(s>59){
				m++;
				s=0;
			}
			if(m>59){
				h++;
				m=0;
			}
			if(h>12){
				h=1;
			}
			printf("\nClock:");
			printf("\n %02d:%02d:%02d",h,m,s);
			sleep(d);
			system("cls");
		}
	}
	getch();
}
