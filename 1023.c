#include <stdio.h>
int main()
{
	char a, b, c, op;
	scanf("%c%c%c", &a, &b, &c);
	{
		if (a > b) op = a, a = b, b = op;
		if (a > c) op = a, a = c, c = op;
		if (b > c) op = b, b = c, c = op;
		printf("%c %c %c\n", a, b, c);
	}
	return 0;
}