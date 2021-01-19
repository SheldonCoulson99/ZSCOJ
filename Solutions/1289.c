#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int l = strlen(s);
	int i, j;
	for ( i = l - 1; i >= 0; i--)
	{
		if (s[i] == '.' || s[i] == '-' || s[i] == ' ')
		{
			for (int j = i; j <= l + 1; j++)
				s[j] = s[j + 1];
		}
	}
	for (j = 0; j <= l; j++)
	{
		if (s[j] == 'L'&&s[j+1] == 'O'&&s[j+2] == 'L')
		{
			printf("OH\n");
			return 0;
		}
	}
	printf("OK\n");
	return 0;
}