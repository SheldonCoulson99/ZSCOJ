#include <iostream>
using namespace std;
int main()
{
	int a[100], n, m , i = 0, t, j;
	cin >> n;
	cin >> m;
	while (n != 0)
	{
		t = n % m;
		n = n / m;
		a[i++] = t;
	}
	for (j = i - 1; j >= 0; j--)
		cout << a[j];
	cout << endl;
	return 0;
}