////0:zero,1:one,2:two,3:three,4:four,5:five,6:six,7:seven,8:eight,
////9:nine,10:ten,11:eleven,12:twelve,13:thirteen,14:fourteen,15:fifteen,
////16:sixteen,17:seventeen,18:eighteen,19:nineteen,20:twenty¡£
////30¶Á×÷thirty£¬40¶Á×÷forty£¬50¶Á×÷fifty¡£
//#include<iostream>
//#include<string>
//using namespace std;
//
//string  n[100] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
//"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
//"thirty","forty","fifty" };
//
//
//void assis(int x)
//{
//	int a = x / 10;
//	int b = x % 10;
//	if (x <= 20)
//	{
//		cout << n[x];
//	}
//	else if (x > 20 && x <= 60)
//	{
//		cout << n[a + 18];
//		if (b!=0)
//		{
//			cout << n[b];
//		}
//	}
//}
//
//void time(int hour, int min)
//{
//	if (min == 0)
//	{
//		assis(hour);
//		cout << "o'clock" << endl;
//	}
//	else
//	{
//		assis(hour);
//		cout << " ";
//		assis(min);
//		//cout << endl;
//	}
//
//}
//
//int main()
//{
//	int h, m;
//	cin >> h >> m;
//	if (h >= 0 && h < 24 && m >= 0 && m < 60)
//	{
//		time(h, m);
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int h, m;
	char a[21][20] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
					"nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
					"seventeen", "eighteen", "nineteen", "twenty" };
	char b[6][20] = { "zero", "ten", "twenty","thirty", "forty", "fifty" };
	scanf("%d %d", &h, &m);
	if (m == 0)
	{
		if (h <= 20)
		{
			printf("%s o'clock\n", a[h]);
		}
		else
		{
			printf("%s %s o'clock\n", b[h / 20], a[h % 20]);
		}
	}
	else
	{
		if (h <= 20)
		{
			printf("%s ", a[h]);
		}
		else
		{
			printf("%s %s ", b[h / 10], a[h % 20]);
		}

		if (m <= 20)
		{
			printf("%s\n", a[m]);
		}
		else
		{
			printf("%s %s\n", b[m / 10], a[m % 10]);
		}
	}
	return 0;
}