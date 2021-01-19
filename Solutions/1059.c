#include<stdio.h>
#define N 30
int main()
{
	int i = 0, j = 0, s = 0;
	int n = 0, a[N][N];

	while (scanf("%d", &n) != EOF)
	{
		if (n < 0 && n>30)
		{
			return 0;
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				for (j = i; j >= 0; j--)
				{
					if (i == j || j == 0)
					{
						a[i][j] = 1;
					}
					else
					{
						a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
					}
				}
				for (j = i; j >= 0; j--)
				{
					printf("%d ", a[i][j]);

				}
				printf("\n");
			}
			printf("\n");
		}
	}
}