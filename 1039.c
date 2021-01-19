#include<stdio.h>
#include<math.h>

main()
{
	int x = 0, y = 0;
	double res = 0, fres = 0, x2 = 0;
	while (~scanf("%d%d", &x,&y))
	{
		double x2 = x, res = x;
		for (int j = 1; j < y; j++)
		{
			x2 = sqrt(x2);
			res += x2;
		}
		printf("%.2lf\n", res);
	}
}