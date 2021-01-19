#include<stdio.h>
int main()
{
	int N,i;
	int j, k;
	typedef struct File
	{
		int num;
		char name[10];
		
	}f;

	f file[101];
	f t;
	f temp;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &file[i].num);
		scanf("%s", file[i].name);
	}
	for ( j = 0; j < N; j++)
	{
		for ( k = 0; k < N-i-1; k++)
		{
			if (file[k].num < file[k + 1].num)
			{
				t = file[k];
				file[k] = file[k + 1];
				file[k + 1] = t;

				file temp = file[k].name;
				file[k] = file[k + 1];
				file[k + 1] = t;

			}
		}
	}
}