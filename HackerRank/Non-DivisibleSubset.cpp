// Problem ID:		non-divisible-subset
// Problem Name:	Non-Divisible Subset
// Problem Link:	https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

#include <cmath>
#include <cstdio>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long arr[100001];
long R[100001];
set <int> s;
int main()
{
	int n, k, i, j;
	cin >> n >> k;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		R[i] = arr[i] % k;
	}

	int en = (k % 2) ? k / 2 : k / 2 - 1;
	for (i = 1; i <= en; i++)
	{
		if (count(R, R + n, i) >= count(R, R + n, k - i))
		{
			for (j = 0; j < n; j++)
				if (R[j] == i)
					s.insert(arr[j]);
		}
		else
			for (j = 0; j < n; j++)
				if (R[j] == k - i)
					s.insert(arr[j]);
	}
	for (i = 0; i < n; i++)
		if (R[i] == 0)
		{
			s.insert(arr[i]);
			break;
		}
	if (k % 2 == 0)
		for (i = 0; i < n; i++)
			if (R[i] == k / 2)
			{
				s.insert(arr[i]);
				break;
			}

	cout << s.size() << endl;
	return 0;

}
