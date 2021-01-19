#include <iostream> 
using namespace std;
int main()
{
	int n, m, a[110], i, j=0, k=0, t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		for (i = 0; i < n; i++)
		{
			a[i] = 1;
		}
		i = 0;
		while (n - j > 2)
		{
			if (a[i] != 0)
			{
				k++;
			}
			if (k == m)
			{
				a[i] = 0;
				j++;
				k = 0;
			}
			if (i == n - 1)
			{
				i = 0;
			}
			else
			{
				i++;
			}
		}
		for (i = 0; i < n; i++)
		{
			if (a[i] == 1)
			{
				cout << i + 1 << " ";
			}
		}
		cout << endl;
	}
	return 0;
}