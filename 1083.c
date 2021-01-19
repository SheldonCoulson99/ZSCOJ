#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int k, i, c = 0;
	double wbc, rbc, hgb, hct, plt;
	char sex[7] = {0}, str1[] = { "female" }, str2[] = { "male" };
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		c = 0;
		scanf("%s", &sex);
		if (strcmp(sex,str2)==0)
		{
			scanf("%lf%lf%lf%lf%lf", &wbc, &rbc, &hgb, &hct, &plt);
			if (wbc<4.0||wbc>10.0)
			{
				c++;
			}
			if (rbc<3.5||rbc>5.5)
			{
				c++;
			}
			if (hgb < 120 || hgb>160)
			{
				c++;
			}
			if (hct < 42 || hct>48)
			{
				c++;
			}
			if (plt<100||plt>300)
			{
				c++;
			}
			if (c==0)
			{
				printf("normal\n");
			}
			else
			{
				printf("%d\n", c);
			}
		}
		else if (strcmp(sex,str1)==0)
		{
			scanf("%lf%lf%lf%lf%lf", &wbc, &rbc, &hgb, &hct, &plt);
			if (wbc<4.0||wbc>10.0)
			{
				c++;
			}
			if (rbc<3.5||rbc>5.5)
			{
				c++;
			}
			if (hgb < 110 || hgb>150)
			{
				c++;
			}
			if (hct < 36 || hct>40)
			{
				c++;
			}
			if (plt<100||plt>300)
			{
				c++;
			}
			if (c==0)
			{
				printf("normal\n");
			}
			else
			{
				printf("%d\n", c);
			}
		}
		else
		{
			return 0;
		}
	}
		return 0;
}