#include<iostream>
using namespace std;
int main()
{
	int n;
	double speed[200] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double m = 0, t = 0;
		cin >> m >> t;
		speed[i] = m / t;
	}
	double max = speed[0];
	for (int i = 0; i < n; i++)
	{
		if (speed[i]>max)
		{
			max = speed[i];
		}
	}
	cout << max << endl;
}