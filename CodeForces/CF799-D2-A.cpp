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
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int o1 = 0;
    int o2 = d;
    int g = (n + k - 1) / k;

    for (int i = 0; i < g; i++)
        if (o1 <= o2)
            o1 += t;
        else
            o2 += t;

    if (max(o1, o2) < g * t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}