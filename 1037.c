#include<stdio.h>
int main()
{
	int m, n, i, temp, sum1, sum2;
	while (~scanf("%d%d", &m, &n))
	{
		sum1 = sum2 = 0;
		if (m > n)
		{
			temp = m; m = n; n = temp;
		}
		for (i = m; i <= n; i++)
		{
			if (i % 2 == 0)
				sum1 += i*i;
			else if (i % 2 == 1)
				sum2 += i*i*i;
		}
		printf("%d %d\n", sum1, sum2);
	}
	return 0;
}