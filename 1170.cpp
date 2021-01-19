//#include<stdio.h>
//int main()
//{
//	int T, M, i, j;
//	int t[1000], m[100];
//	int tt = 0, tm = 0;
//
//	scanf("%d%d", &T, &M);
//	if (T <= 1000 && T >= 1 && M >= 1 && M <= 100)
//	{
//		for ( j = 0; j < M; j++)
//		{
//			scanf("%d%d", &t[j], &m[j]);
//		}
//		for ( i = 0; i < M; i++)
//		{
//			if (m[i] < m[i + 1])
//			{
//				int temp;
//				temp = m[i + 1];
//				m[i + 1] = m[i];
//				m[i] = temp;
//
//				temp = t[i + 1];
//				t[i + 1] = t[i];
//				t[i] = temp;
//			}
//		}
//		for (i = 0; i < M; i++)
//		{
//			tt += t[i];
//			if (tt>T)
//			{
//				tt = 0;
//			}
//			else
//			{
//				tm += m[i];
//			}
//		}
//		printf("%d\n", tm);
//	}
//	return 0;
//}
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
#define n 101
int time[n];
int value[n];
int best[n][n];

int main()
{
	int t, m;
	cin >> t >> m;	
	for (int i = 1; i <= m; i++)
	{
		cin >> time[i] >> value[i];
	}
	memset(best, 0, sizeof(best));
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= t; j++)
		{
			best[i][j] = best[i - 1][j];
			if (j >= time[i])
				best[i][j] = max(best[i - 1][j], best[i - 1][j - time[i]] + value[i]);
		}
	}
	cout << best[m][t]<<endl;
	return 0;
}