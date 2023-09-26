#include <stdio.h>
#define MAX_PROCESS 10
struct Process {
    int pid;           // Process ID
    int burstTime;     // Burst time
    int remainingTime; // Remaining burst time
};

void roundRobinScheduling(struct Process processes[], int n, int quantum) {
    int i, totalBurstTime = 0;
    float averageWaitingTime = 0, averageTurnaroundTime = 0;

    // Calculate the total burst time
    for (i = 0; i < n; i++) {
        totalBurstTime += processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;
    }

    // Perform round robin scheduling
    int currentTime = 0;
    while (totalBurstTime > 0) {
        for (i = 0; i < n; i++) {
            if (processes[i].remainingTime > 0) {
                if (processes[i].remainingTime <= quantum) {
                    currentTime += processes[i].remainingTime;
                    totalBurstTime -= processes[i].remainingTime;
                    processes[i].remainingTime = 0;
                } else {
                    currentTime += quantum;
                    totalBurstTime -= quantum;
                    processes[i].remainingTime -= quantum;
                }
                printf("Process %d executed from %d to %d\n", processes[i].pid, currentTime - processes[i].burstTime, currentTime);
            }
        }
    }

    // Calculate waiting time and turnaround time
    for (i = 0; i < n; i++) {
        int turnaroundTime = currentTime;
        int waitingTime = turnaroundTime - processes[i].burstTime;
        averageWaitingTime += waitingTime;
        averageTurnaroundTime += turnaroundTime;

        printf("Process %d: Waiting Time = %d, Turnaround Time = %d\n", processes[i].pid, waitingTime, turnaroundTime);
    }

    // Calculate average waiting time and average turnaround time
    averageWaitingTime /= n;
    averageTurnaroundTime /= n;

    printf("Average Waiting Time = %.2f\n", averageWaitingTime);
    printf("Average Turnaround Time = %.2f\n", averageTurnaroundTime);
}

int main() {
    int n, quantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the time quantum: ");
    scanf("%d", &quantum);

    struct Process processes[MAX_PROCESS];

    // Input process details
    for (int i = 0; i < n; i++) {
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &processes[i].burstTime);
        processes[i].pid = i + 1;
    }

    roundRobinScheduling(processes, n, quantum);

    return 0;
}
