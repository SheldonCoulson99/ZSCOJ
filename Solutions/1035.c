#include<stdio.h>
int main()
{
	int a, b, c, n, method;
	scanf("%d", &n);
	{
		method = 0;
		for (a = 0; a <= n / 5; a++)
		{
			for (b = 0; b <= n / 3; b++)
			{
				c = n - b - a;
				if ((c % 3 == 0) && (5 * a + 3 * b + c / 3 == n) && a != 0 && b != 0 && c != 0)
					method++;
			}
		}
		printf("%d\n", method);
	}
}