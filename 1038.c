#include<stdio.h>
int main()
{ 
	int	a,b,c,n,i;
	float x;
	while(1)
	{ 
		scanf("%d",&n);
		if(n==0) 
			break;
		else
			a=b=c=0;
		for(i=1;i<=n;i++)
		{ 
			scanf("%f",&x);
			if(x<0)
				a++; 
			else if(x==0)
				b++;
			else if(x>0)
				c++;
		} printf("%d %d %d\n",a,b,c);
	}
}