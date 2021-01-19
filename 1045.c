#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int n, i, j, k, d;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", a);
		d = strlen(a);
		for (i = 0, j = 0; i < d; i++)
		{
			if (a[i] >= '0'&&a[i] <= '9')
				j++;
		}
		printf("%d\n", j);
	}
	return 0;
}