#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b,a;
	cin >> a;
	b = int(sqrt(a));
		if (b * b == a)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	return 0;
}