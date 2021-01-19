#include<stdio.h>
#include<math.h>
int main()
{
	int	a, b, i;

	while (scanf("%d%d", &a, &b)!= EOF && a >= 1 && b <= 10000)
	{
		if (a == 0 && b == 0)
		{
			return 0;
		}
		int d = 1, i;
			for (i = 0; i<b; i++)
				{
					d *= a;
					d %= 1000;
				}
		printf("%d\n", d);

	}
}
//#include <stdio.h>
//int main()
//{
//	int a, b, c, i;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a == 0 && b == 0)
//			return 0;
//		if (b == 1) 
//		{
//			c = a;
//			printf("%d", a);
//			continue;
//		}
//		c = a;
//		for (i = 1; i < b; i++)
//		{
//			c = (c*a) % 1000;
//		}
//		printf("%d\n", c);
//	}
//	return 0;
//}
//#include <stdio.h>
//main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF && (a || b))
//	{
//		int d = 1, i;
//		for (i = 0; i<b; i++)
//		{
//			d *= a;
//			d %= 1000;
//		}
//		printf("%d\n", d);
//	}
//}