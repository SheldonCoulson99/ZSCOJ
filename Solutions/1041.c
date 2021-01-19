#include<stdio.h>
#include<math.h>
main()
{
	int x, y, n;
	int i, b;
	int res;
	double k;
                              // && (x||y)
	while (scanf("%d%d", &x, &y) && (x == y == 0))
	{
		b = 0;
		for (n = x; n <= y; n++)
		{
			res = n*n + n + 41;
			k = sqrt(res);
			for (i = 2; i <= k; i++)
				if (res %i == 0)
					break;
			if (i > k)
				b++;
		}
		if (y - x + 1 == b)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
}