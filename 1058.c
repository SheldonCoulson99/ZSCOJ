#include<stdio.h>
#include<string.h>
#define N 200

main()
{
	char s[N];
	int n, m = 0;
	int i, j;

	scanf("%d", &n);
	getchar();
	while (n--)
	{
		m = 0;
		gets(s);
		i = strlen(s);
		for (j = 0; j < i; j++)
			if (s[j] < 0)
				m++;
		printf("%d\n", m / 2);
	}
	return 0;
}