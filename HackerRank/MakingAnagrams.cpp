// Problem ID:		making-anagrams
// Problem Name:	Making Anagrams
// Problem Link:	https://www.hackerrank.com/challenges/making-anagrams/problem

#include <iostream>
#include <string>
using namespace std;
int Arr1[26];
int Arr2[26];
int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int cnt = 0;
	for (int i = 0; i < s1.length(); i++)
		Arr1[s1[i] - 'a'] += 1;

	for (int i = 0; i < s2.length(); i++)
		Arr2[s2[i] - 'a'] += 1;
	int large = 0;
	for (int i = 0; i < 26; i++)
		if (Arr1[i] >= Arr2[i])
			cnt += 2 * Arr2[i];
		else
			cnt += 2 * Arr1[i];
	cout << s1.size() + s2.size() - cnt << endl;
	return 0;
}
