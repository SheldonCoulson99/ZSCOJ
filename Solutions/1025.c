#include<stdio.h>

int main()
{
	int i, n, a, b;
	int sum;

	scanf("%d", &b);
	for (a = 1; a <= b; a++)
	{
		scanf("%d", &n);
		sum = 1;

		for (i = 2; i <= n; i++)
			sum = (sum + 1) * 2;
		printf("%d\n", sum);
	}
	return 0;
}