//#include<stdio.h>
//int main()
//{
//	int m, n[100], loop1,  fu;
//	double  res = 0, term = 1, loop3;
//
//	scanf("%d", &m);
//	for (loop1 = 1; loop1 <= m; loop1++)
//	{
//		scanf("%d", &n[loop1]);
//	}
//	for (loop1 = 1; loop1 <= m; loop1++)
//	{
//		res = 0, fu = -1;
//		for (loop3 = 1; loop3 <= n[loop1]; loop3++)
//		{
//			fu = -fu;
//			term = fu * (1 / loop3);
//			res = res + term;
//		}
//		printf("%.2lf\n", res);	
//	}
//}

//#include<stdio.h>
//main()
//{
//	int i, n;
//	float s, h, m, j;
//	int a[100];
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 1; i <= n; i++)
//	{
//		s = 0; h = -1;
//		for (j = 1; j <= a[i]; j++)
//		{
//			h = -h;
//			m = h*(1 / j);
//			s = s + m;
//		}
//		printf("%.2f\n", s);
//	}
//}