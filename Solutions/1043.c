//#include <stdio.h>
//main()
//{
//	int m, n, i, avg, flag, sum, t;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		sum = 0;
//		flag = 0;
//		t = 1;
//		for (i = 1; i <= n; i++)
//		{
//			flag++;
//			sum = sum + 2 * i;
//			if (flag == m)
//			{
//				avg = sum / flag;
//				if (t == 1)
//				{
//					printf("%d", avg);
//					t++;
//				}
//				else
//				{
//					printf(" %d", avg);
//				}
//				flag = 0;
//				sum = 0;
//			}
//			if ((i == n) && (flag != 0))
//			{
//				avg = sum / flag;
//				if (t == 1)
//				{
//					printf("%d", avg);
//					t++;
//				}
//				else
//					printf(" %d", avg);
//			}
//
//		}
//		printf("\n");
//	}
//}
#include <stdio.h>
main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int sum = 0, ai = 2, count = 0, i;

		for (i = 1; i <= n; i++)
		{
			sum += ai;
			ai += 2;            //first number is 2	
			if (i % m ==0)
			{
				count++;
				if (count != 1)
					printf(" ");
					printf("%d", sum / m);
					sum = 0;
			}
		}
		if (n % m == 0)
			printf("\n");
		else
			printf(" %d\n", sum / (n % m));
	}
}