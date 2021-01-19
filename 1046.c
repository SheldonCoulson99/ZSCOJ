#include<stdio.h>
int main()
{
	int n,i;
	int a[55];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;

	for ( i = 4; i < 55; i++)
	{
		a[i] = a[i - 1] + a[i - 3];
	}
	while (scanf("%d", &n) && n != 0)
	{
		printf("%d\n", a[n - 1]);
	}
	return 0;
}