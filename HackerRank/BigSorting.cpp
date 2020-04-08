// Problem ID:    big-sorting
// Problem Name:  Big Sorting
// Problem Link:  https://www.hackerrank.com/challenges/big-sorting/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b);
bool cmp(string a, string b)
{
	int i = a.size();
	int j = b.size();

	if (i == j)
		return a < b;
	return i < j;
}

int main()
{

	int n; cin >> n;
	vector <string> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end(), cmp);

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;

}
