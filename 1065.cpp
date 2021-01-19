#include<iostream>
using namespace std;
int main()
{
	int a[500], b[500];
	int n;
	int start = 0, end = 0;
	int c = 0;
	while (cin >> n&&n != 0) {
		c = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i] >> b[i];
		for (int i = 0; i < n; i++)
			for (int j = i; j < n; j++) {
				if (b[i] > b[j]) {
					swap(b[i], b[j]);
					swap(a[i], a[j]);

				}
			}
		c++;
		start = a[0];
		end = b[0];
		for (int i = 1; i < n; i++) {
			if (a[i] >= end) {
				c++;
				end = b[i];
			}
		}
		cout << c << endl;
	}
	return 0;
}