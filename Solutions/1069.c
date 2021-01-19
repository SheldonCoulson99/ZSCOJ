#include<stdio.h>
int main()
{
	int n, i, m, j , left;
	left = 3;

	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &m);
		for ( j = 1; j <= m; j++)
		{
			left = (left - 1) * 2;
		}
		printf("%d\n", left);
		left = 3;
	}
	return 0;
}