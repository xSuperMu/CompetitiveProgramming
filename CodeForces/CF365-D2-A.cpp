#include <bits/stdc++.h>
using namespace std;

bool found(int k, long long num)
{
    bool fund = true;
    string s = to_string(num);
    for (int i = 0; i <= k; i++)
    {
        string cur_s = to_string(i);
        fund &= s.find(cur_s) != string::npos;
    }
    return fund;
}
int main()
{

    int n, cnt = 0, k;
    cin >> n >> k;
    long long in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (found(k, in))
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}