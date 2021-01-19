#include<stdio.h>
void main()

{
    int a,b,c,d,e=0;                     
    scanf("%3d",&a);                     
    b=a;

    for(c=1;c<=3;c++)                     

		{
			d=b%10;                          
			e=e+d*d*d;                        
			b=b/10;                           
		}

    if(a==e)                              
	{
		printf("yes\n",a);   
	}
    else
        printf("no\n",a); 
	return 0;
}