#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, ans = 0;
		scanf("%d", &n);
		for (int i = 1; i <= 81; i++)
		{
			if (n - i < 0)
			{
				break;
			}
			int tmp = n - i, sum = 0;
			while (tmp != 0)
			{
				sum += tmp % 10;
				tmp /= 10;
			}
			if (sum == i)
			{
				ans++;
			}
		}
		printf("%d\n", ans);
	}
}