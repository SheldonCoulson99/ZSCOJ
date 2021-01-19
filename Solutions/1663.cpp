#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, i;
	int c = 0;
	char s1[10], s2[10];
	cin >> n;
	getchar();
	cin.getline(s1, 10);
	cin.getline(s2, 10);
	for ( i = 0; i < n; i++)
	{
		c += (abs)(s1[i] - s2[i]);
	}
	cout << c << endl;
	return 0;
}