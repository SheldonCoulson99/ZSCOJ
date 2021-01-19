#include<iostream>
using namespace std;
int main()
{
	int M, N, S;
	int arr[100] = { 0 };
	cin >> N;
	for (int j = 0; j < N; j++)
	{
		cin >> M;
		for (int i = 0; i < M; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < M; i++)
		cout << arr[i] << endl;
	}
}