#include<stdio.h>
main()
{
	int n;
	int wage, sum;
	int a=0, b=0, c=0, d=0, e=0, f=0, i=0;

	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
			break;
		sum = 0;
		for ( i = 0; i < n; i++)
		{
			scanf("%d", &wage);
			sum += wage / 100;
			wage %= 100;
			sum += wage / 50;
			wage %= 50;
			sum += wage / 10;
			wage %= 10;
			sum += wage / 5;
			wage %= 5;
			sum += wage / 2;
			wage %= 2;
			sum += wage;

		}
		printf("%d\n", sum);
	}
	return 0;
}