#include<stdio.h>
int main()
{
	int T, i, j, k, l;
	int n, m;
	char c[100][100] = { {0} };
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &n, &m);
		getchar();
		if (n >= 1 && n <= 100 && m >= 1 && m <= 100)
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
				{
					scanf("%c", &c[i][j]);
				}
				getchar();
			}

			for (i = 0; i < m; i++)
			{
				if (i % 2 != 0)
				{
					for (j = n-1; j >= 0; j--)
					{
						printf("%c", c[j][i]);
					}
				}
				else
				{
					for ( j = 0; j < n; j++)
					{
						printf("%c", c[j][i]);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}