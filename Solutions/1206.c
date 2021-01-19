#include<stdio.h>
int main()
{
	int N, i;
	double a[105] = { 0 },ans = 0.0, all = 0.0;

	while (scanf("%d", &N) != EOF)
	{
		for (i = 0; i < N; i++)
		{
			scanf("%lf", &a[N]);
			all += a[N];
		}
		ans = all / N;
		printf("%.2lf\n", ans);
		all = 0;
	}
	return 0;
}