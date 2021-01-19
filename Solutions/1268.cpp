#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string  f(int x)
{
	float n = log(x + 1) / log(26);
	int len = (int)ceil(n);
	char *p = new char[len + 1];
	string str;
	char temp;
	char *q, *r;
	r = q = p;
	while (x)
	{
		if (x % 26 == 0)
		{
			*r = 'Z';
			x = x / 26 - 1;
		}
		else
		{
			*r = char((x % 26 - 1) + 'A');
			x = x / 26;
		}
		r++;
	}
	*r = '\0';
	r = r - 1;
	for (int j = 0; j<len / 2; j++)
	{
		temp = *q;
		*q = *r;
		*r = temp;
		r--;
		q++;
	}
	str = p;
	delete[] p;
	return str;
}

int main(void)
{
	int num;
	int T;
	cin >> T;
	while (T--)
	{
		cin >> num;
		cout << f(num) << endl;
	}
	return 0;
}
//cp