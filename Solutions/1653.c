#include<stdio.h>
int f(int N);
int main()
{
	int N, a, b;
	a = 1, b = 2;
	scanf("%d", &N);
	printf("%d\n", f(N));
	return 0;
}
int f(int N)
{
	if (N==1||N==2)
	{
		return N;
	}
	if (N>2)
	{
		return (f(N - 1) + f(N - 2));
	}
}