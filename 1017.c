#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, s;
	
	scanf("%f %f %f",&a,&b,&c);

	s = 0.25*(sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a)));
	
		if(a+b>c&&a+c>b&&b+c>a)
		{
			printf("%.2f",s);
		}
		else
		printf("not triangle\n");
	return 0;
	
}
