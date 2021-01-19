#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000];
	while (scanf("%s", s) != EOF)
	{
		int a = 0, b = 0, i, l;
		l = strlen(s);
		for (i = 0; i < l; i++)
		{
			if (i % 2 == 0)
			{
				a += (s[i] - '0');
			}
			else
			{
				b += (s[i] - '0');
			}
		}
		if ((a - b) % 11 == 0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}