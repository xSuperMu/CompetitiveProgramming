#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <math.h>
#include <cstring>
//#include <bits/stdc++.h>
using namespace std;
 
int n, num[26], sum = 0;
char arr[301][301], a, b;
 
int main()
{
	bool okay = true;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			num[arr[i][j] - 'a'] = 1;
		}
 
	for (int i = 0; i < 26; sum += num[i], i++);
	if (sum != 2)
	{
		cout << "NO\n";
		return 0;
	}
 
	a = arr[0][0], b = arr[0][1];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || i == n - j - 1)
			{
				if (arr[i][j] != a)
					okay = false;
			}
			else
				if (arr[i][j] != b)
					okay = false;
 
		}
	}
 
	if (okay) cout << "YES\n";
	else cout << "NO\n";
 
	return 0;
}