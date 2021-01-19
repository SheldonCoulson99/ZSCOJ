#include<iostream>
#include<string>

using namespace std;

int str2int(string);

int main()
{
	string str, tmp = "";
	cin >> str;
	unsigned i = 0, k = 0, pos1 = 0, pos2 = 0, max = 0, tmpmax;

	while (i<str.length())
	{
		if (!isdigit(str[i]))
		{
			++i;
			continue;
		}
		else
		{
			pos1 = k = i;
			while (isdigit(str[k]))
			{
				tmp += str[k];
				++k;
				continue;
			}
		}
		tmpmax = str2int(tmp);
		if (tmpmax>max)
		{
			max = tmpmax;
			pos2 = i;
		}
		tmp = "";
		i = k;
	}
	cout << pos2 + 1 << endl;

	return 0;
}
int str2int(string str)
{
	const char *p;
	int n;
	p = str.c_str();
	n = atoi(p);
	return n;
}