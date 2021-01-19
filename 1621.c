#include <stdio.h>
main()
{
	char a[100][30];
	int i, j, k, n, m;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			k = j - i;
			if (k < 0)
				k = -k;
			a[i][j] = 'A' + k;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{	
			int o = i;
			if (o >= 26)
				o -= 26;
			printf("%c", a[o][j]);
		}
		printf("\n");
	}
}