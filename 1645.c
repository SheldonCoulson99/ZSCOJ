#include <stdio.h>
int main()
{
	long long s = 1;
	int n, i, j;

	scanf("%d", &n);
	if (n >= 1 && n <= 34)
	{
		printf("1\n");
		for (i = 2; i <= n; s = 1, i++)
		{
			printf("1");
			printf(" ");
			for (j = 1; j <= i - 2; j++)
				printf("%lld ", (s = (i - j) * s / j));
			printf("1\n");
		}
	}
	return 0;
}