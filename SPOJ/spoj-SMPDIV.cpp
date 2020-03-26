// Problem ID:		SMPDIV
// Problem Name:	SMPDIV - Divisibility
// Problem URL:		https://www.spoj.com/problems/SMPDIV/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> vec;
int main()
{
	int t, n, x, y;
	cin >> t;
	while (t--)
	{
		cin >> n >> x >> y;
		for (int i = 2; i < n; i++)
		{
			if ((i%x == 0) && (i%y != 0))
				vec.push_back(i);
		}

		sort(vec.begin(), vec.end());

		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i];
			if (i < vec.size() - 1)
				cout << " ";
		}
		cout << endl;
		vec.clear();
	}
	return 0;
}
