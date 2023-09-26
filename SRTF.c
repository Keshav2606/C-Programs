#include <stdio.h>

#define MAX_PROCESS 10

struct Process {
    int pid;           // Process ID
    int arrivalTime;   // Arrival time
    int burstTime;     // Burst time
    int remainingTime; // Remaining burst time
};

void srtfScheduling(struct Process processes[], int n) {
    int i, currentTime = 0, totalBurstTime = 0;
    float averageWaitingTime = 0, averageTurnaroundTime = 0;

    // Calculate the total burst time
    for (i = 0; i < n; i++) {
        totalBurstTime += processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
    }

    int completed = 0;
    while (completed < n) {
        int shortestTime = -1;
        int shortestIndex = -1;

        for (i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0) {
                if (shortestTime == -1 || processes[i].remainingTime < shortestTime) {
                    shortestTime = processes[i].remainingTime;
                    shortestIndex = i;
                }
            }
        }

        if (shortestIndex == -1) {
            currentTime++;
            continue;
        }

        struct Process *currentProcess = &processes[shortestIndex];
        currentProcess->remainingTime--;

        if (currentProcess->remainingTime == 0) {
            completed++;
            int turnaroundTime = currentTime + 1 - currentProcess->arrivalTime;
            int waitingTime = turnaroundTime - currentProcess->burstTime;

            averageWaitingTime += waitingTime;
            averageTurnaroundTime += turnaroundTime;

            printf("Process %d: Waiting Time = %d, Turnaround Time = %d\n", currentProcess->pid, waitingTime, turnaroundTime);
        }

        currentTime++;
    }

    // Calculate average waiting time and average turnaround time
    averageWaitingTime /= n;
    averageTurnaroundTime /= n;

    printf("Average Waiting Time = %.2f\n", averageWaitingTime);
    printf("Average Turnaround Time = %.2f\n", averageTurnaroundTime);
}

int main() {
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    struct Process processes[MAX_PROCESS];

    // Input process details
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time for Process %d: ", i + 1);
        scanf("%d", &processes[i].arrivalTime);
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &processes[i].burstTime);
        processes[i].pid = i + 1;
    }

    srtfScheduling(processes, n);

    return 0;
}
