#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k, pr, pl, sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> pl >> pr;
        sum += pr - pl + 1;
    }

    if (sum % k == 0)
        cout << 0 << endl;
    else
    {
        int cnt = 0;
        while (sum % k != 0)
        {
            ++cnt;
            ++sum;
        }
        cout << cnt << endl;
    }

    return 0;
}