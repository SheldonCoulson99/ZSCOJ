//#include<iostream>
//#include<algorithm>
//#include<functional>
//using namespace std;
//bool comp(int a, int b)
//{
//	return a > b;
//}
//int main()
//{
//	int n, i;
//	int search;
//	int a[50] = {0};
//	cin >> n;
//	for ( i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n, comp);
//	cin >> search;
//	for ( i = 0; i < n; i++)
//	{
//		if (search == a[i])
//		{
//			cout << i+1 << endl;
//			break;
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n, i, j, k, a[101], b[101], search, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &search);
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		b[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		if (search == b[i])
		{
			printf("%d\n", i + 1);
			break;
		}
	}
	return 0;
}