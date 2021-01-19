#include<stdio.h>
#include<string.h>

main()
{
	char s[100];
	char max;
	int i, j, k;

	while (scanf("%s", s) != EOF)
	{
		max = s;
		i = strlen(s);
		for (j = 0; j < i; j++)
		{
			if (max < s[j])
				max = s[j];
		}

		for (j = 0; j < i; j++)
		{
			printf("%c", s[j]);
			if (s[j] == max)
			{
				printf("(max)");
			}
		}
		printf("\n");
	}			
	return 0;

}