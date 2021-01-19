#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	char a[N];
	int i, l;

	while(gets(a))
	{
		l = strlen(a);
		if (l > N)
		{
			break;
		}
		else
		{

			if (a[0] >= 'a'&&a[0] <= 'z')
			{
				a[0] -= 32;
			}
			for (i = 0; i <= l; i++)
			{
				if (a[i] == ' ')
				{
					if (a[i + 1] >= 'a'&&a[i + 1] <= 'z')
						a[i + 1] -= 32;
					i++;
					printf(" ");
				}
				printf("%c", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}