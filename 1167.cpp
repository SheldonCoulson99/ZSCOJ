#include<iostream>
using namespace std;
int ans = 0, a[11][11], b[11], n;
void dfs(int deep)
{
	int i, j, k;
	bool flag;
	if (deep > 5) { ans++; return; }
	for (i = 1; i <= 4; i++)
	{
		flag = true;
		for (j = 1; j <= deep - 1; j++)
			if (a[deep][j] == 1 && b[j] == i)
			{
				flag = false;
				break;
			}
		if (flag)
		{
			b[deep] = i;
			dfs(deep + 1);
		}
	}
}
int main()
{
	int i, j, x, y;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	dfs(1);
	cout << ans << endl;
	return 0;
}