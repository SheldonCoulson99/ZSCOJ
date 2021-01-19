#include<stdio.h>
int main()
{
	int T,n;
	char x;
	scanf("%d ", &T);
	while (T--)
	{
		scanf("%c", &x);
		getchar();
		scanf("%d", &n);
		if (n >= 1 && n <= 40)
		{
			for (int i = 0; i < n; i++)
			{
				for (int i = 0; i < n - 1; i++)
				{
					printf(" ");
				}
				printf("%c", x);
				printf("\n");
				for (int i = 0; i < n-1-i; i++)
				{
					printf(" ");
				}
				printf("%c", x);
			}
			
		}
	}
}