#include<stdio.h>
int main()
{
	int n, m,temp;
	int a, b;
	int res;

	scanf("%d%d", &n, &m);
	/*if (n > m)
	{
		temp = n;
		n = m;
		m = temp;
	}*/
	a = n;
	b = m;
	while (b!=0)
	{
		temp = a%b;
		if (temp==0)
		{
			a = b;
			b = temp;
			break;
		}
		else
		{
		a = b;
		b = temp;
		}
	}
	n /= a;
	m /= a;
	if (n%m==0)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d/%d\n", n, m);
	}
	return 0;
}