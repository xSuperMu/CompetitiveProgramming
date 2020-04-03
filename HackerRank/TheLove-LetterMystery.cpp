// Problem ID:		the-love-letter-mystery
// Problem Name:	The Love-Letter Mystery
// Problem Link:	https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

#include <iostream>
#include <string>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s;
		cin >> s;
		int cnt = 0;
		int l = 0, r = s.size() - 1;

		while (l < r)
		{
			if (s[l] == s[r])
			{
				l++;
				r--;
			}
			else
			{
				if (s[l] > s[r])
					cnt += (int)s[l] - (int)s[r];
				else
					cnt += (int)s[r] - (int)s[l];
				l++;
				r--;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
