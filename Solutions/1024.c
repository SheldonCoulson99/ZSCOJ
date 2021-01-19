#include <stdio.h>
int main()
{
	int T, i, n = 0, a ,b ,c;
	double sum1,sum2,sum3;

	scanf("%d", &T);
	while (n<T)
	{
		sum1 = 0, i = 1;
		scanf("%d", &a);
		for (i = 1; i <= a; i++)
		{
			sum1 = sum1 + i;
			n = n + 1;
		}
		sum2 = 0, i = 1;
		scanf("%d", &b);
		for (i = 1; i <= b; i++)
		{
			sum2 = sum2 + i;
			n = n + 1;
		}
		sum3 = 0, i = 1;
		scanf("%d", &c);
		for (i = 1; i <= c; i++)
		{
			sum3 = sum3 + i;
			n = n + i;
		}

	}		
	printf("%.f\n", sum1);
	printf("%.f\n", sum2);
	printf("%.f\n", sum3);

	return 0;
}