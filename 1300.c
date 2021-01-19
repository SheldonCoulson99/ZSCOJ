#include<stdio.h>
int main()
{
	int T,a=0,b=0;
	int i;
	char c;


	//scanf("%d", &T);
	//for (i = 0; i < T; i++)
	//{
	while ((c = getchar()) != "\n")
	{
			if (c >= 'a' && c <= 'm')
				a++;
			else if (c >= 'n' && c <= 'z')
				b++;
	}

			if (a > b)
				printf("1\n");
			else if (a == b)
				printf("0\n");
			else 
				printf("2\n");
	}