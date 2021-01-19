#include<stdio.h>
int main()
{
    char C;
    while(scanf("%c",&C))
    {
    if(C=='y')
        {
            printf("a\n");
        }
        else if(C=='z')
        {
            printf("b\n");
        }
        else
        {
            printf("%c\n",C+2);
        }
		return 0;
    }
}