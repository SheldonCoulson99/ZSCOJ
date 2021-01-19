#include<stdio.h>
int main()
{
	int n=0,t = 0;
	int e = 0, r = 0, l = 0;
	scanf("%d", &n);
	for ( t = 0; t < n; t++)
	{
		scanf("%d%d%d", &e, &r, &l);

		if (e != r && e != l && r != l)
			printf("nobody won!\n");
		else if (r==l)
			printf("Eva won!\n");
		else if (e==l)
			printf("RK won!\n");
		else if (e==r)
			printf("live won!\n");
	}
	return 0;
}