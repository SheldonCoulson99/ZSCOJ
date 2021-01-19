#include<stdio.h>
int main()
{
	int a[100];
	int n, m = 0;
	int i, j, k;

	scanf("%d", &n);
	for ( j = 0; j < n; j++)
	{
		scanf("%d", &m);
		a[0] = 0;
		a[1] = 1;
		a[2] = 1;
		a[3] = 2;

		for (i = 4; i <= m; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		printf("%d\n", a[m]);
	}
	return 0;
}