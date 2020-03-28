// Problem ID:		CPTTRN1
// Problem Name:	CPTTRN1 - Character Patterns (Act 1)
// Problem Link:	https://www.spoj.com/problems/CPTTRN1/

#include <iostream>
using namespace std;

int main()
{
	int t, l, c;
	int flag;
	cin >> t;
	while (t--)
	{
		cin >> l >> c;
		flag = 0;

		for (int Line = 0; Line < l; Line++)
		{
			for (int colmun = 0; colmun < c; colmun++)
			{
				if (flag == 0 || flag % 2 == 0)
				{
					if (colmun == 0 || colmun % 2 == 0)
						cout << "*";
					else
						cout << ".";
				}
				else
				{
					if (colmun == 0 || colmun % 2 == 0)
						cout << ".";
					else
						cout << "*";
				}
			}
			cout << endl;
			flag++;
		}
	}
	return 0;
} 
