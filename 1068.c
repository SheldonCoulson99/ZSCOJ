#include<stdio.h>
int main()
{
	int n,m,stair[5000];
	int i,j;

	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &m);
		stair[0] = 0, stair[1] = 1, stair[2] = 1, stair[3] = 2;
		for (j = 4; j <= m; j++)
		{
			stair[j] = stair[j - 1] + stair[j - 2];
		}
		printf("%d\n", stair[m]);
	}
	return 0;
}