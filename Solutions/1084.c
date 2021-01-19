#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000000];
	int n;
	scanf("%d",&n);
	getchar();
	while (n--)
	{
		gets(a);
		int l = strlen(a);
		int k, sum = 0;
		for (k = 0; k < l; k++)
			sum += a[k] - '0';
		while (sum>9)
		{
			int temp = sum;
			sum = 0;
			while (temp > 0)
			{
				sum += temp % 10;
				temp /= 10;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}