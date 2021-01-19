#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int n, i;
	double s[1025] = { 0 };
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n);

	if (n % 2 == 0)
	{
		double sum1 = 0;
		sum1 = (((s[n / 2] + (s[n / 2] + 1)) / 2) - 1);
		cout << setiosflags(ios::fixed) << setprecision(2) << sum1 << endl;
		return 0;
	}
	else if (n % 2 != 0)
	{
		double sum2 = 0;
		sum2 = s[((n + 1) / 2) - 1];
		cout << setiosflags(ios::fixed) << setprecision(2) << sum2 << endl;
		return 0;
	}
	return 0;
}