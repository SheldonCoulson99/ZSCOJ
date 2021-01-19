#include<stdio.h>
int main()
{
	double s = 1;
	int n = 1, k;

	scanf("%d", &k);
		while (1)
		{
			if (s > k)
				break;
				n++;
				s += 1.0 / n;
		}
		printf("%d\n", n);
		return 0;
}