#include <bits/stdc++.h>
using namespace std;

bool coprime(unsigned long long a, unsigned long long b)
{
    return __gcd(a, b) == 1;
}

int main()
{

    unsigned long long l, r;
    cin >> l >> r;

    if (l + 2 > r)
    {
        cout << -1 << endl;
        return 0;
    }

    for (unsigned long long i = l; i <= r - 2; i++)
    {
        for (unsigned long long j = i + 1; j <= r - 1; j++)
        {
            for (unsigned long long s = j + 1; s <= r; s++)
            {

                if (coprime(i, j) && coprime(j, s) && !coprime(i, s))
                {
                    cout << i << ' ' << j << ' ' << s << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}