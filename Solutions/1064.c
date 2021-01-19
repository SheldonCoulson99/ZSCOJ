#include<stdio.h>
#define N 5000
main()
{
	int n, i, j;
	double x[N], y[N], s;

	while (scanf("%d", &n) != EOF)
	{
		if (n < 3)
			return 0;

		for (i = 1; i <= n; i++)
			scanf("%lf%lf", &x[i], &y[i]);

			s = 0;
			x[n + 1] = x[1]; y[n + 1] = y[1];

		for (i = 1; i <= n; i++)
			s += x[i] * y[i + 1] - x[i + 1] * y[i];

		printf("%.1lf\n", s / 2);
	}
}