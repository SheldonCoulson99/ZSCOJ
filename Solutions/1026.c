#include<stdio.h>
int main()
{
	int N, M, i, j;
	scanf("%d", &N);

	for (i = 0; i <3 * N; i++)
	{
		for (j = 0; j < N; j++)
			printf("ZSC");
		printf("\n");
	}

	return 0;
}