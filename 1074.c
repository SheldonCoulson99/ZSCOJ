#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 40

int main()
{
	int n, i;
	long long s[N] = { 0,3,8 };

	for (i = 3; i < 40; i++)
	{
		s[i] = 2 * s[i - 1] + 2 * s[i - 2];
	}
	while (scanf("%d", &n) != EOF &&n > 0 && n < 40)
	{
		printf("%lld\n", s[n]);
	}
	return 0;
}