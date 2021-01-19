#include <stdio.h>
int main()
{
	double ap = 3.5;
	double bp = 4.2;//price

	double aw = 0.0;
	double bw = 0.0;//weight

	double sum = 0.0;//total

	

	printf("input the weight of apple:");
	scanf("%lf", &aw);
	printf("input the weight of banana:");
	scanf("%lf", &bw);
	
	sum = (ap * aw + bp * bw);
	
	printf("in total:%.2lf", sum);

	return 0;
}