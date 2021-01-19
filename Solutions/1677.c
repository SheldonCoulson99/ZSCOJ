#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		long long ans = 1;
		for (int i = 2; i <= sqrt(n); i++)
		{
			int cnt = 0;
			while (n % i == 0)
			{
				n /= i;
				cnt++;
			}
			if (i % 4 == 1)
			{
				ans *= 2 * cnt + 1;
			}
		}
		if (n > 1 && n % 4 == 1)
		{
			ans *= 3;
		}
		printf("%lld\n", ans * 4);
	}
	return 0;
}