#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, a, b;

    cin >> n >> x;

    while (n--)
    {
        cin >> a >> b;
        if (x == a || x == b || 7 - x == a || 7 - x == b)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}