// Problem ID:		CPTTRN2
// Problem Name:	CPTTRN2 - Character Patterns (Act 2)
// Problem Link:	https://www.spoj.com/problems/CPTTRN2/

#include <iostream>
using namespace std;

int main()
{
	int t, l, c;
	cin >> t;
	while (t--)
	{
		cin >> l >> c;

		for (int line = 0; line < l; line++)
		{
			for (int column = 0; column < c; column++)
			{
				if ((column > 0 && column < c-1) && (line > 0 && line < l-1) )
					cout << ".";
				else
					cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
} 
