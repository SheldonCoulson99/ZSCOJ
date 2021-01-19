#include<stdio.h>
int main()
{
	int a, b, num1, num2, tem;
	scanf("%d%d", &num1, &num2);
	if (num1 < num2)
	{
		tem = num1;
		num1 = num2;
		num2 = tem;
	}
	a = num1;
	b = num2;
	while (b != 0)
	{
		tem = a%b;
		a = b;
		b = tem;
	}
	printf("%d\n", num1*num2/a);
	return 0;
}