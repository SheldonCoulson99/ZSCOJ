int k(int a, int b)
{
	return (b>0) ? k(b, a%b) : a;
}
#include<stdio.h>
int main()
{
	int a, b, c, i, n;
	while (scanf("%d", &n) != EOF)
	{
		scanf("%d", &a);
		for (i = 1; i<n; i++)
		{
			scanf("%d", &b);
			c = k(a, b);
			a = a / c*b;
		}
		printf("%d\n", a);
	}
	return 0;
}