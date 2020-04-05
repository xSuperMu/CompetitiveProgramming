// Problem ID:    cut-the-sticks
// Problem Name:  Cut the sticks
// Problem Link:  https://www.hackerrank.com/challenges/cut-the-sticks/problem
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int N, cnt;
vector <int> Stick;
vector <int> Ans;
bool SortDescending(int i, int j) { return i > j; }
int main()
{
	cin >> N;
	cnt = 0;
	for (int i = 0; i < N; i++)
	{
		int value;
		cin >> value;
		Stick.push_back(value);
	}
	sort(Stick.begin(), Stick.begin() + N,SortDescending);
	while (N)
	{
		Ans.push_back(N);
		for (int i = 0; i < N; i++)
			Stick[i] -= Stick[N - 1];

		for (int i = 0; i < Stick.size(); i++)
			if (Stick[i] > 0) cnt++;
		N = cnt;
		cnt = 0;
	}
	for (int i = 0; i < Ans.size(); i++)
		cout << Ans[i] << endl;
	return 0;
}
