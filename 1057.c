#include<stdio.h>
#include<string.h>
#define N 50

main()
{
	int n, l;
	int i, j, c=0;

	char s[N],rs[N];

	scanf("%d", &n);
	getchar();
	while (n--)
	{
		gets(s);
		l = strlen(s);
		for (i = 0; i < l; i++)
			rs[i] = s[l - 1 - i];
		for (i = 0; i < l; i++)
		{
			if (rs[i] == s[i])
				c++;
		}
		if (c == l)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
		c = 0;
	}
}