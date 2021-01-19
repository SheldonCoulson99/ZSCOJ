#include<stdio.h>
void retc(int i, double a[])
{
	int j=i, k=i, c=0;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < i; k++)
		{
			if ((a[j]) == (a[k] / 2))
				c++;
		}
	}
	printf("%d\n", c);
}
int main()
{
	double a[16] = { 0 };
	int i;

	while (a != -1)
	{

		for (i = 0; i < 16; i++)
		{
			scanf("%lf", &a[i]);
			if (a[i] == 0)
				break;
			else if (a[i] == -1)
			{
				return 0;
			}
		}
		retc(i, a);
	}

	return 0;
}