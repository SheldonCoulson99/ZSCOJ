#include<stdio.h>
#include<string.h>
int main()
{
	int i, l, c = 1, count = 0, cx = 0;
	char n[80];
	while (gets(n))
	{
		l = strlen(n);
		if (l == 0 || l != 11)
		{
			c = 0;
		}
		for (i = 0; i < l; i++)
		{
			if (n[0] == '0')
			{
				c = 0;
				break;
			}
			if (n[i] == 'X'||n[i]=='x')
			{
				c *= 10;
				cx++;
				if (cx > 9)
				{
					c = 0;
					cx = 0;
					break;
				}
			}
		}
		count++;
		printf("Case #%d: %d\n",count, c);
		c = 1;
		cx = 0;
	}
		
}