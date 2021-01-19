#include<stdio.h>

int main()
{
	int n = 0;
	int a = 0;
	int b = 1;
	int c = 1;
	int i = 1;
	scanf("%d", &n);
	while (i<n)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	printf("%d\n", c);
	return 0;
}