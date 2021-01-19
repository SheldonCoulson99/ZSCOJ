#include<stdio.h>
#include<stdlib.h>
int cmp(const void*p1, const void*p2)
{
	return *(int*)p1 - *(int*)p2;
}
int main()
{
	int n, m, i, a[111];
	while (scanf("%d%d", &n, &m) != EOF)
	{
		if (m == 0 && n == 0)break;
		a[n] = 0;
		for (i = 0; i<n; i++)
			scanf("%d", &a[i]);
		a[n] = m;
		qsort(a, n + 1, sizeof(a[0]), cmp);
		for (i = 0; i<n + 1; i++)
		{
			if (i == 0)
				printf("%d", a[0]);
			else
				printf(" %d", a[i]);
		}
		printf("\n");
	}
	return 0;
}