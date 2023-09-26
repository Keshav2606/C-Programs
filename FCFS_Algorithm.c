#include<stdio.h>
 void main(){
    int n, bt[30], AT[30], WT[30], TAT[30], avWT=0, avTAT=0, i, j;
    printf("Please enter the total number of processes(maximum 30):");  
    scanf("%d", &n);	
 printf("\nEnter The Process Arrival Time:\n");
 for(i=0; i< n; i++){
        printf("P[%d]:", i+1);
        scanf("%d", &AT[i]);
    }
    printf("\nEnter The Process Burst Time:\n");
    for(i=0; i< n; i++){
        printf("P[%d]:", i+1);
        scanf("%d", &bt[i]);
    }
    WT[0]=0;   
    for(i=1; i< n; i++)
    {
        WT[i] = 0;
        for(j=0 ;j< i; j++)
            WT[i]+=bt[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        TAT[i]= bt[i]+WT[i];
        avWT += WT[i];
        avTAT += TAT[i];
        printf("\nP[%d]\t\t%d\t\t\t%d\t\t%d",i+1,bt[i],WT[i],TAT[i]);
    }
 
    avWT /= i;
    avTAT /= i;  // average calculation is done here
    printf("\nAverage Waiting Time:%d", avWT);
    printf("\nAverage Turnaround Time:%d", avTAT);
 
}

