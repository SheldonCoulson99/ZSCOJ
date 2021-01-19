#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, v, max, maxi, maxj, i, j;

	while (scanf("%d%d", &m, &n) != EOF)
	{
		max = 0;
		maxi = 1;
		maxj = 1;

		for ( i = 1; i <= m; i++)
			for ( j = 1; j <=n; j++)
			{
				scanf("%d", &v);
				if (abs(v) > abs(max))
				{
					max = v;
					maxi = i;
					maxj = j;
				}
			}
		printf("%d %d %d\n", maxi, maxj, max);
	}
	return 0;
}
//#include <math.h>
//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	int n, m;
//	int x, y;
//	double a, t;
//
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		a = x = y = 0;
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= m; j++)
//			{
//				scanf("%lf", &t);
//				if (fabs(t) > fabs(a))
//				{
//					a = t;
//					x = i;
//					y = j;
//				}
//			}
//		}
//		printf("%d %d %.0f\n", x, y, a);
//	}
//
//	return 0;
//}