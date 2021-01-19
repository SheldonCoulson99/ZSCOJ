#include<stdio.h>
int main()
{
	int roll = 0, a = 0, b = 0, c = 0, res = 0;
	int i = 0;
	scanf("%d", &roll);

	for (i = 0; i < roll; i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		if (a + b > c && b + c > a && a + c > b && a < 1000 && b < 1000 && c < 1000)
		{
			printf("YES\n");
		}

		else
		{
			printf("NO\n");
		}
	}
	return 0;
}