#include<stdio.h>
int main()
{
	int t, n, k, q;
	int i;

	scanf("%d", &t);
	for ( i = 0; i < t; i++)
	{
		scanf("%d%d%d", &n, &k, &q);
		n = n + (k*q);
		printf("%d\n", n);
	}
	return 0;
}