#include<stdio.h>
main()
{
	int n, i, m;
	int smallsum = 0;

	while (scanf("%d", &n) != EOF) 
	{
		for (i = 0; i < 5; i++)
		{
			
			scanf("%d", &m);
			if (n > m)
			{
				smallsum = smallsum + m;
			}
		}
		printf("%d\n", smallsum);
		smallsum = 0;
	}
}