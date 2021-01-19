#include<stdio.h>
int main()
{
	char x[9];
	int i;
	unsigned int n = 1, a = 0;
	scanf("%s", x);
	for ( i = strlen(x)-1; i >= 0; i--)
	{
		if (x[i] <= '9')
			a += (x[i] - '0') * n;
		else
			a += (x[i] - 'A' + 10) * n;
		n *= 16;
	}
	printf("%u\n", a);
	return 0;
}