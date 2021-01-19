#include<stdio.h>
int main()
{
	int chang = 0, kuan = 0, kuan2 = 0;
	int i, j, k;
	char c = '-';

	while (scanf("%d%d", &chang, &kuan) != EOF && chang>0 && kuan<75)
	{
		printf("+");
		for (i = 0; i < chang; i++)
		{
			printf("%c", c);
		}
		printf("+\n");

		for (j = 0; j < kuan; j++)
		{
			printf("|");
			for (k = 0; k < chang; k++)
			{
				printf(" ");
			}
			printf("|\n");
		}
		printf("+");
		for (i = 0; i < chang; i++)
		{
			printf("%c", c);
		}
		printf("+\n\n");
	}
}