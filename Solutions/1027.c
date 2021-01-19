#include<stdio.h>  
int main()  
{
	int a=0,i=0;  
	scanf("%d",&a);
	if(a==1)
		printf("no");   
	for(i=a-1;i>1;i--)  
	{   
		if(a%i==0)
		{ 
			printf("no");  
			break ;  
		}  
	}	   
	if(i==1)  
		printf ("yes");    
    return 0;  
} 