#include<stdio.h>
#include<string.h>
void upper(char s[], char s1[])
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
			s[i] = s[i] - 32;
		if (s1[i] >= 'a'&&s1[i] <= 'z')
			s1[i] = s1[i] - 32;
	}
}
int main()
{
	char s[10], s1[10];
	int l1, l2;
	gets(s);
	gets(s1);
	l1 = strlen(s);
	l2 = strlen(s1);
	if (l1 == l2)
	{
		if (strcmp(s, s1) == 0)
		{
			printf("2\n");
			return 0;
		}
		upper(s, s1);
		if (strcmp(s, s1) == 0)
			printf("3\n");
		else
			printf("4\n");
	}
	else
		printf("1\n");
	return 0;
}