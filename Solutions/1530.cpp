#include<iostream>
using namespace std;
int main()
{
	const int n = 35;
	const int m = 2 * n - 1;
	int p = 1, c;
	int out, N;
	int arr[n + 1][m] = { 0 };

	for (int i = 0; i < n; i++)
	{
		arr[i][n - i - 1] = 1;
		arr[i][n + i - 1] = 1;
	}
	for (int i = 2; i < n; i++)
	{
		for (int j = n - i + 1; j < n - 2 + i; j = j + 2)
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
	}
	cin >> N;
	for ( c = 0; c < N; c++)
	{
		cin >> out;
		for (int j = n - out - 1; p < out + 2; j = j + 2)
			{
				cout << arr[out][j] << " ";
				p = p + 1;
			}
		cout << endl;
		p = 1;
	}
	return 0;
}