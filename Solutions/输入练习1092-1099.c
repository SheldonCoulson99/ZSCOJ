////1092
//#include<stdio.h>
//main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
////1093
//#include<stdio.h>
//main()
//{
//	int a, b, i, o, n;
//
//	scanf("%d", &n);
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		o = a + b;
//		printf("%d\n", o);
//	}
//}
////1094
//#include<stdio.h>
//main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a == 0 && b == 0)
//		{
//			break;
//		}
//		printf("%d\n", a + b);
//	}
//}
////1095
//#include<stdio.h>
//main()
//{
//	int n, a, sum, i;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n == 0)
//		{
//			break;
//		}
//		sum = 0;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &a);
//			sum += a;
//		}
//		printf("%d\n", sum);
//	}
//}
////1096
//#include<stdio.h>
//main()
//{
//	int a, b, i, n1,n2, sum;
//	scanf("%d", &n1);
//	for ( i = 0; i < n1; i++)
//	{
//		while (scanf("%d", &n2) != EOF)
//				{
//					if (n2 == 0)
//					{
//						break;
//					}
//					sum = 0;
//					for (i = 0; i < n2; i++)
//					{
//						scanf("%d", &a);
//						sum += a;
//					}
//					printf("%d\n", sum);
//				}
//	}
//}
////1097
//#include<stdio.h>
//main()
//{
//	int a, b, i, n, sum = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		sum = 0;
//		for ( i = 0; i < n; i++)
//		{
//			
//			scanf("%d", &a);
//			sum += a;
//		}
//		printf("%d\n", sum);
//	}
//}
////1098
//#include<stdio.h>
//main()
//{
//	int a, b, n, i, sum = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		sum = a + b;
//		printf("%d\n\n", sum);
//	}	
//}
////1099
#include<stdio.h>
main()
{
	int a, b, i,j, n,o, sum = 0;
	scanf("%d", &o);
	for (j = 0; j <o; j++)
	{
		while (scanf("%d", &n) != EOF)
		{
			sum = 0;
			for (i = 0; i < n; i++)
			{

				scanf("%d", &a);
				sum += a;
			}
			printf("%d\n\n", sum);
		}
	}
}