#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int n, next = 0, temp;
    vector<bool> v(100005, 0);
    cin >> n;
    next = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        v[temp] = 1;
        if (temp != next)
            cout << '\n';

        if (v[next] == 1)
        {
            while (v[next] == 1)
            {
                cout << next;
                cout << ' ';
                --next;
            }
            cout << '\n';
        }
    }
    return 0;
}