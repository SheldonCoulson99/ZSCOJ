#include <stdio.h>
int main()
{
	char c;

	scanf_s("%c", &c);
	
	if (c >= 'a'&&c <= 'z')printf("%c", c - 32);
	else printf("%c", c);
	
	return 0;
}