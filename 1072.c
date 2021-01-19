#include<stdio.h>
main()
{
	long long a[60];
	int n, i;
	a[1] = 3;
	a[2] = 6;
	a[3] = 6;

	while (scanf("%lld", &n) != EOF)
	{
		for (i = 4; i <= n; i++)
			a[i] = a[i - 1] + a[i - 2] * 2;
		printf("%lld\n", a[n]);
	}
	return 0;
}