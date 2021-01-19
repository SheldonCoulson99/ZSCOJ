#include<stdio.h>
#include<string.h>

int main()
{
	int m, i, j , l;
	int t1=0, t2=0, t3=0, t4=0;
	char pw[100];

	scanf("%d", &m);
	getchar();
	while (m--)
	{
		t1 = t2 = t3 = t4 = 0;
		gets(pw);
		for (i = 0; pw[i] != '\0'; i++)
		{
			if (strlen(pw) >= 8 && strlen(pw) <= 16)
			{
				if (pw[i] >= 'A'&& pw[i] <= 'Z')
					t1 = 1;
				if (pw[i] >= 'a'&& pw[i] <= 'z')
					t2 = 1;
				if (pw[i] >= '0'&& pw[i] <= '9')
					t3 = 1;
				if (pw[i] == '~' || pw[i] == '!' || pw[i] == '@' || pw[i] == '#' || pw[i] == '$' || pw[i] == '%' || pw[i] == '^')
					t4 = 1;
			}
		}
		if (t1 + t2 + t3 + t4 > 2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}