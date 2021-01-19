#include <iostream>
using namespace std;
#define N 205

int main(int argc, char* argv[])
{
	int a[205][205] = { {0} };
	int n, count = 1;
	int x, y;
	cin >> n;
	x = 0; y = n - 1;
	a[x][y] = 1;

	while (count < n * n)
	{
		while (x + 1 < n && !a[x + 1][y])
			a[++x][y] = ++count;
		while (y - 1 >= 0 && !a[x][y - 1])
			a[x][--y] = ++count;
		while (x - 1 >= 0 && !a[x - 1][y]) 
			a[--x][y] = ++count;
		while (y + 1 < n && !a[x][y + 1])
			a[x][++y] = ++count;
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
			cout << a[x][y] << " ";
		cout << endl;
	}
	return 0;
}