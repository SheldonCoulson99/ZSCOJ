#include<stdio.h>
#include<string.h>
int main()
{
	int T,i;
	char num[1000];
	int n = 0;
	scanf("%d", &T);
	getchar();
	while (T--)
	{
		n = 0;
		gets(num);
		long long l = strlen(num);
		for ( i = 0; i < l; i++)
		{
			n+=num[i]-'0';
		}
		if (l >= 1)
		{
			if (n % 3 == 0 && num[i-1] % 2 == 0)
			{
				printf("Tiantian's luckly number\n");
			}
			else
			{
				printf("So sorry\n");
			}
		}
	}
	return 0;
}