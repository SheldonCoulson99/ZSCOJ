#include<stdio.h>
int main()
{
	int n=0, i=0, j=0, k=0;
	char tm[10];
	int nd[10];
	do
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf(" %c%d", &tm[i], &nd[i]);
		}
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n - i - 1; k++)
			{
				int t;
				if (nd[k] > nd[k + 1])
				{
					t = nd[k];
					nd[k] = nd[k + 1];
					nd[k + 1] = t;

					t = tm[k];
					tm[k] = tm[k + 1];
					tm[k + 1] = t;
				}
			}
		}
		for (j = 0; j < n; j++)
		{
			printf("%c\n", tm[j]);
		}
		printf("\n");
	} while (n != 0);
	return 0;
}