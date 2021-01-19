
#include <stdio.h>
int main()
{
	int a[100], b, c, n, k, i, t;
	while (scanf("%d", &n) != EOF)
	{
		for (b = 0; b < n; b++)
		{
			scanf("%d", &a[b]);
		}

		for (c = 0; c < n - 1; c++)
		{
			k = c;
			for (i = c + 1; i < n; i++)
			{
				if (abs(a[k]) > abs(a[i]))
				{
					k = i;
				}
				if (k != c)
				{
					t = a[c];
					a[c] = a[k];
					a[k] = t;
					k = c;
				}
			}

		}
		for (c = n - 1; c >= 0; c--)
		{

			printf("%d ", a[c]);
		}
		printf("\n");
	}
	return 0;
}
