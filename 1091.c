#include<stdio.h>
int main()
{
	int i, j, r, k, s, n; 
	scanf("%d", &k);
	for (r = 0; r < k; r++)
	{
		scanf("%d", &n);
		if (n >= 6 && n <= 10000)
		{
			for (i = 2; i <= n; i++)
			{
				s = 0;
				for (j = 1; j < i; j++)
				{
					if (i%j == 0)
						s += j;
				}
				if (s == i)
					printf("%d\n", i);
			}
		}
	}
	return 0;
}