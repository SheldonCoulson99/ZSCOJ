#include <stdio.h>
#include <string.h>

int main()
{
	int b[35];
	int i, sum;
	char skew[35];
	b[0] = 1;
	for (i = 1; i <31; i++)
	{
		b[i] = 2 * b[i - 1] + 1;
	}
	while (1) 
	{
		gets(skew);
		sum = 0;
		if (strcmp(skew, "0") == 0)
			break;
		int len = strlen(skew);
		for (i = 0; i < len; ++i)
		{
			sum += (skew[i] - '0')*b[len - i - 1];
		}
		printf("%d\n", sum);

	}
	return 0;
}