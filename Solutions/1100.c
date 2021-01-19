#include<stdio.h>
int main()
{
	int appleh[10];
	int range;
	int got = 0;
	int i=0,n=0;

	for (i = 0; i < 10; i++){
		scanf("%d", &appleh[i]);
	}
		scanf("%d", &range);

		for (n = 0; n < 10; n++) {
			if (appleh[n] <= (range + 30)) {
				got++;
			}
		}
	printf("%d",got);
	return 0;
}
