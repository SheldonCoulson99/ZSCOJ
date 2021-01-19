#include<stdio.h>
main()
{
	int n = 0, a = 0, b = 1, c = 1, i = 1;
	scanf("%d", &n);
	while (i<n)
	{
		c = a + b;a = b;b = c;i++;
	}
	printf("%d", c);
}