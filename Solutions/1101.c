#include<stdio.h>
int main()
{
	int n,i,j,k,r,s=0;
	scanf("%d", &n);
	r = n;
	for (i = 0; i < n; i++)
		for ( j = 1; j < r; j++,r--)
		{
			s=s+j;
			printf("%d", s);
		}
}