#include<stdio.h>
int main()
{
	int a, b, c=1, i;
	while((scanf("%d", &a))/* != EOF*/)
	{
		c = 1;
		for (i = 0; i < a; i++)
		{
			scanf("%d", &b);
			if (b % 2 != 0)
				c *= b;
		}printf("%d\n", c);
	}
	return 0;
}