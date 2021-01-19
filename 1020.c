#include <stdio.h>
void main()
{
	double p,w,s,d,f;
	
	scanf("%lf",&p);
	
	scanf("%lf",&w);
	
	scanf("%lf",&s);
	
	if(s>0&&w>0)
	{
		if(s < 250)
		{
			d=0;
		}
		else if(s < 500)
		{
			d=0.02;	
		}
		else if(s < 1000)
		{
			d=0.05;	
		}
		else if(s < 2000)
		{
			d=0.08;	
		}
		else if(s < 3000)
		{
			d=0.1;	
		}
		else
		{
			d=0.15;	
		}
		
		f=p*w*s*(1-d);
		printf("%.2lf\n",f);	
	}
	else{
			return 0;
	}	
}
