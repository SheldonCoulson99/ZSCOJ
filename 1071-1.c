#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int a, b, temp=0;
	double way[51] = {0};
	way[2] = 1;
	way[3] = 2;

	
	for ( i = 4; i <= 50; i++)
	{
		way[i] = way[i - 1] + way[i - 2];
	}
	for ( i = 0; i < n;i++)
	{
		scanf("%d%d", &a, &b);
		if (a > b)
		{
		temp = a;
		a = b;
		b = temp;
		}
		printf("%.0lf\n", way[b - a + 1]);
	}

}