// Problem ID:		CPTTRN4
// Problem Name:	CPTTRN4 - Character Patterns (Act 4)
// Problem Link:	https://www.spoj.com/problems/CPTTRN4/
#include <iostream>
using namespace std;

int main()
{
	int t, l, c, h, w;
	cin >> t;
	while (t--)
	{
		cin >> l >> c >> h >> w;
		for (int line = 0; line < l * h + l + 1; line++)
		{
			for (int column = 0; column < c * w + c + 1; column++)
			{
				if ((column != 0 && column % (w + 1) != 0) && (line != 0 && line % (h + 1) != 0))
					cout << ".";
				else
					cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}
