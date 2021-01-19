#include<stdio.h>
main()
{
	int t,i;
	int min = 0, hour = 0;
	int setmin = 15, sethour = 8;

	scanf("%d", &t);
	for ( i = 0; i < t; i++)
	{
		scanf("%d%d", &hour, &min);
		if (min >= 0 && min <= 59 && hour >= 0 && hour <= 23)
		{
			if (hour < 7)
			{
				printf("Yes\n");
				continue;
			}
			if (hour == 7)
			{
				if (min<=45)
					printf("Yes\n");
				else 
					printf("No\n");
				continue;
			}
			if (hour > 7)
			{
				printf("No\n");
				continue;
			}
		}
		else
		{
			return 0;
		}
	}
}