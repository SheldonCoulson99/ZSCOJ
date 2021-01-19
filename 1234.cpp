#include<iostream>
using namespace std;
int main()
{
	int T;
	int p, q, r;
	cin >> T;
	while (T--)
	{
		cin >> p >> q >> r;
		if (r == 1)
		{
			if ((p == 1 && q != 1) || (p != 1 && q == 1))
				cout << '1' << endl;
			else
				cout << '0' << endl;
		}
		else if (r == 2)
		{
			if (p == 1 && q == 1)
				cout << '1' << endl;
			else
				cout << '0' << endl;
		}
		else if (r == 3)
		{
			if (p==1&&q==0)
				cout << '0' << endl;
			else
				cout << '1' << endl;
		}
	}
	return 0;
}