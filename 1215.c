#include<stdio.h>
#include<math.h>

int main()
{
	int n,m;
	int i;
	int t, b;
	char a[100];
	char s[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	while (scanf("%d", &n) != EOF)
	{
		t = n;
		t = (int)fabs(t);
		i = 0;
		while (t>0)
		{
			b = t%8;
			if (b >= 10)
				a[i] = s[b - 10];
			else
				a[i] = b + '0';
			t /= 8;
			i++;
		}
		i--;
		if (n < 0)
			printf("-");
		while (i>=0)
		{
			printf("%c",a[i]);
			i--;
		}
		printf("\n");
	}
	return 0;
}