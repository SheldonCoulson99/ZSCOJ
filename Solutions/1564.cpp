#include<iostream>
using namespace std;
int main()
{
	int i, j, out, n;
	long long int f[45] = { 0 };
	f[1] = 2;
	for ( i = 2; i < 45; i++)
	{
		f[i] = f[i - 1] * 2;
	}
	cin >> n;
	for ( j = 0; j < n; j++)
	{
		cin >> out;
		cout << f[out] << endl;
	}
	return 0;
}