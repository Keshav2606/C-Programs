#include<stdio.h>
#include<windows.h>
int main()
{
    int h,m,s,d=1000;
    printf("Set the Time:\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12||m>59||s>59){
        printf("Error");
        exit(0);
    }
        while(1){
            s++;
            if(s>59){
                m++;
                s=0;
                if(m>59){
                    h++;
                    m=0;
                    if(h>12){
                        h=1;
                    }
                }
            }
            printf("Clock:\n");
            printf("\n%02d:%02d:%02d",h,m,s);
            Sleep(d);
            system("cls");
        }
    return 0;
}
