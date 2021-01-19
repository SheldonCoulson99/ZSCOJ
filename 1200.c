#include<stdio.h>
main()
{
	int n, f, i;
	int ji = 0, tu = 0;
	
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &f);
		
		ji = f / 2;
		tu = f / 4;

		if (f % 2 != 0)
			printf("0 0\n");
		else if (f % 4 != 0)
			printf("%d %d\n", tu + 1, ji);
		else
			printf("%d %d\n", tu, ji);
	}
	return 0;
}