#include<stdio.h>
int main()
{
	int i, a, b, c, n, m, sum = 0;
	scanf("%d%d", &n, &m);
		for (i = 100; i <= m; i++)
		{
			a = (i % 10)*(i % 10)*(i % 10);
			b = ((i / 10) % 10)*((i / 10) % 10)*((i / 10) % 10);
			c = (i / 100)*(i / 100)*(i / 100);

			//if (i == a + b + c)
			//	printf("%d\n", i);	
			if (i == a + b + c)
			{
				sum++;
				
			}
			
		}
		printf("%d\n", sum);
		return 0;
	}