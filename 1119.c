#include<stdlib.h>
#include<stdio.h>
#define N 1000
const int n;

int delete_elem(int arr[], int new_arr[])
{
	int i = 0, new_arr_len = 0;
	int c = 0;
	int flag[N] = { 0 };
	for (i = 0; i <n; i++)
	{
		if (flag[arr[i]] == 0)
		{
			new_arr[new_arr_len++] = arr[i];
			c++;
			flag[arr[i]] = 1;
		}
	}
	printf("%d\n", c);
	return new_arr_len;
}

int main()
{
	int i, arr[N];
	int j, k;
	int new_arr[N];
	scanf("%d", &n);
	if (n < 100)
	{
		int arr_len = n;
		int new_arr_len;
		for (i = 0; i < arr_len; i++)
		{
			scanf("%d", &arr[i]);
		}
		for ( j = 0; j < arr_len; j++)
		{
			for ( k = 0; k < arr_len-j-1; k++)
			{
				if (arr[k] > arr[k+1])
				{
					int t;
					t = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = t;
				}
			}
		}

		new_arr_len = delete_elem(arr, new_arr);
		for (i = 0; i < new_arr_len; i++)
		{
			printf("%d ", new_arr[i]);
		}
		printf("\n");
	}
}