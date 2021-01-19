#include <iostream>
#include <set>
using namespace std;
int main()
{
	int n, m, val;
	set<int> result;

	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
			break;
		result.clear();
		// n��Ԫ�طŽ�������
		for (int i = 1; i <= n; i++)
		{
			cin >> val;
			result.insert(val);
		}
		// m��Ԫ�أ�����ڼ����У���ɾ����Ԫ��
		for (int i = 1; i <= m; i++)
		{
			cin >> val;

			if (result.find(val) != result.end())
			{
				result.erase(val);
			}
		}
		// ��ӡ������
		if (result.size() == 0)
			cout << "NULL" << endl;
		else
		{
			for (set<int>::iterator it = result.begin(); it != result.end(); it++)
				cout << *it << " ";
			cout << endl;
		}
	}
}