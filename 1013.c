#include <stdio.h>

int main()
{
	int a,b,c,max;
  
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",max=((a>b)?a:b)>c?((a>b)?a:b):c);
	
	return 0;
}