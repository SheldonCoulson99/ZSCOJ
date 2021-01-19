#include<stdio.h>
main()
{
	int n = 0, i = 0; 
	double finalscore = 0, tempscore = 0, score = 0, max = 0, min = 0;
	while (scanf("%d", &n)!= EOF)
	{
		scanf("%lf", &tempscore);
		score = max = min = tempscore;
		for (i = 1; i < n; i++)
		{
			scanf("%lf", &tempscore);
			score += tempscore;
			max = (tempscore > max) ? tempscore : max;
			min = (tempscore < min) ? tempscore : min;
		}
		finalscore = (score - min - max)/(n-2);
		printf("%.2lf\n", finalscore);
	}
	return 0;
}