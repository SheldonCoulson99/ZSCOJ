#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (getline(cin, str))
	{
		int length = str.length();
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		for (int i = 1; i < length; i++) 
		{
			if (str[i] == ' ') 
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
				i++;
			}
		}
		cout << str << endl;
	}
	return 0;
}