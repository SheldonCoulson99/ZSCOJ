#include<stdio.h>
#define MONTH 12
int main()
{
	int year, m, month[MONTH] = {31,28,31,30,31,30,31,31,30,31,30,31};

	scanf("%d%d", &year, &m);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		month[1] = 29;
		printf("%d\n", month[m-1]);
	}
	else
	{
		printf("%d\n", month[m-1]);
	}
	return 0;
}