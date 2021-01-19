#include<stdio.h>
main()
{
	int n,i;
	long long s[55];

	s[1] = 1;
	s[2] = 2;

	for ( i = 3; i <= 50; i++)
	{
		s[i] = s[i - 1] + s[i - 2];
	}
	while (scanf("%d", &n) != EOF && n > 0 && n <= 50)
	{
		printf("%lld\n", s[n]);
	}
	return 0;
}