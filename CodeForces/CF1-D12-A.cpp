#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, total = 0, r1, r2;
    cin >> n >> m >> a;

    r1 = m / a;
    r2 = n / a;

    if (n % a > 0)
        ++r2;

    if (m % a > 0)
        ++r1;

    total = r1 * r2;

    cout << total << endl;

    return 0;
}