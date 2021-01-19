#include<stdio.h>
int main()
{
	double a, b;
	while (scanf("%f %f", &a, &b) == 2) {
		if (a == b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}