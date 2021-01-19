#include <stdio.h>
int main()
{
int a,i,sum=0;
scanf("%d",&a);
for(i=0;i<3;i++)
{
sum+=a%10;
a=a/10;
}
printf("%d\n",sum);
}