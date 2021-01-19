#include<stdio.h>
#include<string.h>

int main() 
{
	char a[] = "VWXYZABCDEFGHIJKLMNOPQRSTU";
	char s[101];
	int i;

	while (1) 
	{
		gets(s);
		if (strcmp(s, "ENDOFINPUT") == 0)
			break;
		gets(s);
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= 'A'&&s[i] <= 'Z')
			{
				printf("%c", a[s[i] - 'A']);
			}
			else
				printf("%c", s[i]);
		}
		
		printf("\n");
		gets(s);
	}
	return 0;
}