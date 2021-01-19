#include<stdio.h>
int main()
{
	int AH, AM, AS, BH, BM, BS;
	int TH, TM, TS;
	int i, j, k, n;

	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d%d%d%d%d%d", &AH, &AM, &AS, &BH, &BM, &BS);
		if (AM < 0 && AM>59 && AS < 0 && AS>59)
			return 0;
		
		TS = AS + BS;
		TM = AM + BM;
		TH = AH + BH;

		if (TS > 59)
		{
			TM += 1;
			TS -= 60;

		}
		if (TM > 59)
		{
			TH += 1;
			TM -= 60;
		}


		printf("%d %d %d\n", TH, TM, TS);

	}
}