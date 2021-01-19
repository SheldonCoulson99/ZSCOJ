#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int M;
	int L[10000] = {NULL};
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> L[i];
	}
	stable_sort(L, L+M);
	cout << L[M-1]- L[0] << endl;

	return 0;
}