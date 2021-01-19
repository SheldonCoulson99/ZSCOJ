#include <stdio.h>

int main()

{
	int t;
	
	scanf("%d", &t);
	{
		if (t >= 90 && t <= 100)
			printf("A\n");
		if (t >= 80 && t < 90)
			printf("B\n");
		if (t >= 70 && t < 80)
			printf("C\n");
		if (t >= 60 && t < 70)
			printf("D\n");
		if (t >= 0 && t < 60)
			printf("E\n");
	}
	return 0;	
	
}