#include<stdio.h>
#include<string.h>
#define N 150

main()
{
	char s[N];
	int num1, num2, num3, num4, num5, j, i, n, l;
	scanf("%d", &n);
	getchar();
	for (j = 0; j < n; j++)
	{
		gets(s);
		l = strlen(s);

		num1 = num2 = num3 = num4 = num5 = 0;

		for (i = 0; i<l; i++)
		{
			if (s[i] == 'a'|| s[i] == 'A')
				num1++;
			else if (s[i] == 'e'|| s[i] == 'E')
				num2++;
			else if (s[i] == 'i'|| s[i] == 'I')
				num3++;
			else if (s[i] == 'o'|| s[i] == 'O')
				num4++;
			else if (s[i] == 'u'|| s[i] == 'U')
				num5++;
		}

		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", num1, num2, num3, num4, num5);

		if (n != 0)
			printf("\n");
	}
	return 0;
}