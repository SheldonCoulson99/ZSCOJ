#include<stdio.h>
#include<string.h>
#define N 50
int main()
{
	int n,i,j;
	char s[N];
	int l;

	scanf("%d ", &n);
	for ( i = 0; i < n; i++)
	{
		gets(s);
		l = strlen(s);
		if (s[0] == '_' || (s[0] >= 'A'&&s[0] <= 'Z') || (s[0] >= 'a'&&s[0] <= 'z'))
		{
			for (j = 0; j < l; j++)
			{
				if ((s[j] == '_') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9'))
					continue;
				else
					break;
			}
			if (j == l)
			{
				printf("yes\n");
			}
			else
				printf("no\n");
		}
		else
			printf("no\n");
	}
	return 0;
}