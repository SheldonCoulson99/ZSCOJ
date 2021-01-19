#include<stdio.h>
int main()
{
	int m,j;
	scanf("%d", &m);
	for ( j = 0; j < m; j++)
	{
		int i, a, b, sa = 0, sb = 0;
		scanf("%d%d", &a, &b);
		for (i = a - 1; i >= 1; i--)
		{
			if (a%i == 0)
				sa = sa + i;
		}
		if (sa == b)
		{
			for (i = b - 1; i >= 1; i--)
			{
				if (b%i == 0)
					sb = sb + i;
			}
			if (sb == a)
				printf("YES\n");
			else 
				printf("NO\n");
		}
		else 
			printf("NO\n");
	}
	return 0;
}