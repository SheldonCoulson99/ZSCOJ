#include <stdio.h>
int main()
{
	int i, j, a, b;
	int count = 0;
	do 
		scanf("%d%d", &a, &b);
	while (a>b);
	for (i = a; i <= b; i++)
	{
		for (j = 2; j<i; j++)
			if (i%j == 0) 
				break;
		if (i == j)
			count++;
	}
	printf("%d", count);
	return 0;
}