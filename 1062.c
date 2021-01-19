#include<stdio.h>
int main()
{
	int n, m;//loop var
	

	while (~scanf("%d %d", &n, &m) != EOF && n != 0 && m != 0)
	{
		int flag = 0;
		int i,j,t;//array symbol t=transform
		int a[100], b[100];
		int res[100] = { 0 };//array

		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < m; i++)
			scanf("%d", &b[i]);
		//sort
		for (i = 1; i < n; i++)
		{
			t = a[i];
			for (j = i; j > 0; j--)
			{
				if (t < a[j-1])
					a[j] = a[j -1];
				else
					break;
			}
			a[j] = t;
		}

		//compare
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
				if (a[i] == b[j])
					break;
				if (j >= m)
					res[flag++] = a[i];
		}

		if (flag == 0)
		{
			printf("NULL");
		}
		else
		{
			for (i = 0; i < flag; i++)
			{
				printf("%d ", res[i]);
			}
		}
		printf("\n");

	}
		
	return 0;
}