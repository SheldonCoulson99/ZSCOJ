#include<iostream>
#include<cmath>

using namespace std;

int zs[10001];
int k;

string pri(int m)
{
	if (m == 1) 
		return "";
	for (int i = 0; i < k; i++) 
	{
		if (m % zs[i] == 0) 
		{
			cout << zs[i];
			if (m / zs[i] != 1) 
				cout << "*";
			return pri(m / zs[i]);
		}
	}
}

void prime(int a, int b) 
{
	int i, j;
	k = 0;
	for (i = 2; i <= b; i++) 
	{
		int s = sqrt(i);
		for (j = 2; j <= s; j++)
			if (i % j == 0) 
				break;
		if (j > s) 
		{
			zs[k] = i;
			k++;
		}
	}
}

int main() 
{
	int a, b, i;
	cin >> a >> b;
	prime(a, b);
	for ( i = a; i <= b; i++) 
	{
		cout << i << "=";
		pri(i);
		cout << endl;
	}
	return 0;
}