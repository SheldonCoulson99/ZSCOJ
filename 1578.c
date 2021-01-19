#include<stdio.h>
int main()
{
	int i = 0,t,n,k;
	int a[3];
	int j = 0;
	int tmp = 0;
	int m = sizeof(a) / sizeof(a[0]);

	scanf("%d", &t);
	for (n = 0; n < t; n++)
	{
		for ( k = 0; k < 3; k++)
		{
			scanf("%d", &a[k]);
		}
		for (i = 0; i < m - 1; i++)
		{
			for (j = 0; j < m - i - 1; j++)
			{
				if (a[j] > a[j + 1])
				{
					tmp = a[j + 1];
					a[j + 1] = a[j];
					a[j] = tmp;
				}
			}
		}
		printf("%d\n", a[1]);
		}
	return 0;
}