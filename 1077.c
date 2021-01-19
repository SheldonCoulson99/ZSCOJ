//a[i]=a[i-1]+4*(i-1)+1;
#include<stdio.h>
#define N 10010
int main()
{
	int c, n, j;
	long long a[N];
	a[1] = 2;
	a[2] = 7;
	for (j = 3;j < N;j++)
	{
		a[j] = a[j - 1] + 4 * (j - 1) + 1;
	}
	scanf("%d", &c);
	while (c--)
	{
		scanf("%d", &n);
		if (n > 0 && n <= 10000)
		{
			printf("%lld\n", a[n]);
		}
		else
			return 0;
	}
	return 0;
}