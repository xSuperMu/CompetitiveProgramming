// Problem ID:		CPTTRN3
// Problem Name:	CPTTRN3 - Character Patterns (Act 3)
// Problem Link:	https://www.spoj.com/problems/CPTTRN3/
#include <iostream>
using namespace std;

int main()
{
	int t, l, c;
	cin >> t;
	while (t--)
	{
		cin >> l >> c;
		for (int line = 0; line < l * 3 + 1; line++)
		{
			for (int column = 0; column < c * 3 + 1; column++)
			{
				if ((column != 0 && column % 3 != 0) && (line != 0 && line % 3 != 0))
					cout << ".";
				else
					cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
} 
