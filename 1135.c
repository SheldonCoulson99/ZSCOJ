#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1001

int main()
{
	char ch1[N], ch2[N];
	int  num1[N], num2[N];
	int n, i, len1, len2, j, max, k;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		memset(ch1, 0, sizeof(ch1));
		memset(ch2, 0, sizeof(ch2));
		memset(num1, 0, sizeof(num1));
		memset(num2, 0, sizeof(num2));

		scanf("%s", ch1);
		scanf("%s", ch2);
		len1 = strlen(ch1);
		len2 = strlen(ch2);
		k = 0;
		for (j = len1 - 1; j >= 0; j--)
			num1[k++] = ch1[j] - '0';

		k = 0;
		for (j = len2 - 1; j >= 0; j--)
			num2[k++] = ch2[j] - '0';

		max = len1 > len2 ? len1 : len2;
		for (j = 0; j < max; j++)
		{
			num1[j] -= num2[j];
			if (num1[j] >= 10)
			{
				num1[j] -= 10;
				num1[j + 1]++;
			}
		}
		if (num1[max])
			printf("%d", num1[max]);
		for (j = max - 1; j >= 0; j--)
			printf("%d", num1[j]);
		printf("\n");
	}
	return 0;
}