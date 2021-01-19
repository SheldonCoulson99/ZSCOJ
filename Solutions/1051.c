#include<stdio.h>
int main()
{
	int a[50][50];
	int n, m, i, j;
	double pva[50], sva[50];
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		double sum1 = 0;
		for (j = 0; j < n; j++)
			sum1 += a[i][j];
		pva[i] = sum1 / n;
	}

	for (j = 0; j < m; j++)
	{
		double sum2 = 0;
		for (i = 0; i < n; i++)
			sum2 += a[i][j];
		sva[j] = sum2 / m;
	}

	int y = 0;
	for (i = 0; i < n; i++)
	{
		int x = 0;
		for (j = 0; j < m; j++)
		{
			if (a[i][j] >= sva[j])
				x++;
		}
		if (x == m)
			y++;
	}

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%.2f", pva[i]);
		else
			printf(" %.2f", pva[i]);
	}
	printf("\n");
	for (j = 0; j < m; j++)
	{
		if (j == 0)
			printf("%.2f", sva[j]);
		else
			printf(" %.2f", sva[j]);
	}
	printf("\n");
	printf("%d \n", y);
	printf("\n");
	return 0;
}