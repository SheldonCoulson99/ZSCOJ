#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	long a[10000] = { 0 }, max, min, sum = 0;
	cin >> n;
	for ( i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	max = a[0];
	min = a[0];
	for (j = 0; j < n; j++)
	{
		sum += a[j];
		if (a[j] > max)
			max = a[j];
		if (a[j] < min)
			min = a[j];
	}
	cout << max << endl;
	cout << min << endl;
	cout << sum << endl;
	return 0;
}