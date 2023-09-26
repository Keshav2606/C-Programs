#include<stdio.h>
#include<string.h>

void firstFit(int blockSize[], int m, int processSize[], int n);
void bestFit(int blockSize[], int m, int processSize[], int n);
void worstFit(int blockSize[], int m, int processSize[], int n);

void main()
{	int m;
	int n;
	int blockSize[] = {100, 500, 200, 300, 600};
	int processSize[] = {212, 417, 112, 426};
	m = sizeof(blockSize) / sizeof(blockSize[0]);
	n = sizeof(processSize) / sizeof(processSize[0]);

	firstFit(blockSize, m, processSize, n);
    bestFit(blockSize, m, processSize, n);
	worstFit(blockSize, m, processSize, n);
}

void firstFit(int blockSize[], int m, int processSize[], int n)
{
	int i, j;
	int allocation[n];

	for(i = 0; i < n; i++)
	{
		allocation[i] = -1;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (blockSize[j] >= processSize[i])
			{
				allocation[i] = j;

				blockSize[j] -= processSize[i];

				break;
			}
		}
	}

	printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i = 0; i < n; i++)
	{
		printf(" %i\t\t\t", i+1);
		printf("%i\t\t\t\t", processSize[i]);
		if (allocation[i] != -1)
			printf("%i", allocation[i] + 1);
		else
			printf("Not Allocated");
		printf("\n");
	}
}

void worstFit(int blockSize[], int m, int processSize[], int n)
{
	int allocation[n];

	memset(allocation, -1, sizeof(allocation));

	for (int i=0; i<n; i++)
	{
		int wstIdx = -1;
		for (int j=0; j<m; j++)
		{
			if (blockSize[j] >= processSize[i])
			{
				if (wstIdx == -1)
					wstIdx = j;
				else if (blockSize[wstIdx] < blockSize[j])
					wstIdx = j;
			}
		}

		if (wstIdx != -1)
		{
			allocation[i] = wstIdx;
			blockSize[wstIdx] -= processSize[i];
		}
	}

	printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i = 0; i < n; i++)
	{
        printf(" %d\t\t%d\t\t",i+1,processSize[i]);
		if (allocation[i] != -1)
			printf("%d",allocation[i] + 1);
		else
			printf("Not Allocated");
		printf("\n");
	}
}

void bestFit(int blockSize[], int m, int processSize[], int n)
{
	int allocation[n];

	for (int i = 0; i < n; i++)
		allocation[i] = -1;

	for (int i = 0; i < n; i++)
	{
		int bestIdx = -1;
		for (int j = 0; j < m; j++)
		{
			if (blockSize[j] >= processSize[i])
			{
				if (bestIdx == -1)
					bestIdx = j;
				else if (blockSize[bestIdx] > blockSize[j])
					bestIdx = j;
			}
		}

		if (bestIdx != -1)
		{
			allocation[i] = bestIdx;
			blockSize[bestIdx] -= processSize[i];
		}
	}

	printf("\nProcess No.\tProcess Size\tBlock no.\n");
	for (int i = 0; i < n; i++)
	{
        printf(" %d\t\t%d\t\t",i+1,processSize[i]);
		if (allocation[i] != -1)
			printf("%d",allocation[i] + 1);
		else
			printf("Not Allocated");
		printf("\n");
	}
}
