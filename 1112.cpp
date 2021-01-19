#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <cstdio>
using namespace std;
void Delete(char s[], char c, int &l, int &flag);
void Insert(char s[], char c, char r, int &l, int &flag);
void Replace(char s[], char c, char r, int &l, int &flag);
int main()
{
	char s[100];
	//cin.getline(s, 100);
	gets(s);
	int l = strlen(s);
	int n;
	cin >> n;
	while (n--)
	{
		int flag = 0;
		char j;
		cin >> j;
		if (j == 'D')
		{
			char c;
			cin >> c;
			Delete(s, c, l, flag);
		}
		else if (j == 'I')
		{
			char c, r;
			cin >> c >> r;
			Insert(s, c, r, l, flag);
		}
		else if (j == 'R')
		{
			char c, r;
			cin >> c >> r;
			Replace(s, c, r, l, flag);
		}
		if (flag == 1)
		{
			for (int i = 0; i<l; i++) cout << s[i];
			cout << endl;
		}
		else
			cout << "Not Changed!" << endl;
	}
	return 0;
}
void Delete(char s[], char c, int &l, int &flag)
{
	for (int i = 0; i< strlen(s)-1; i++)
	{
		if (s[i] == c)
		{
			for (int j = i; j<strlen(s) - 1; j++) 
			{
				s[j] = s[j + 1];
			}
			l--;          
			flag = 1;
			break;
		}
	}
}
void Insert(char s[], char c, char r, int &l, int &flag)
{

	for (int i = l - 1; i >= 0; i--)
	{
		if (s[i] == c)
		{
			for (int j = l - 1; j >= i; j--) 
			{
				s[j + 1] = s[j];
			}
			s[i] = r;    
			flag = 1;  
			l++;
			break;
		}
	}
}
void Replace(char s[], char c, char r, int &l, int &flag)
{
	if (c == r)
		return;
	for (int i = 0; i<l; i++)
	{
		if (s[i] == c)
		{
			s[i] = r;
			flag = 1;
		}
	}
}