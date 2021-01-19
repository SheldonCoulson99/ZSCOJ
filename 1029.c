#include<stdio.h>
int main()
{
	int n,m = 0, lastage;
	lastage = 10;

	scanf("%d", &n);

	while (m == n);
	{
		m = 10 + 2 * n - 2;
		n++;
	}
	printf("%d", m);

	return 0;
}