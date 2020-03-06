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
    int n, dis = 0;
    long long in, x, tot = 0;
    cin >> n >> x;
    tot = x;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> ws;
        cin >> in;

        if (c == '+')
            tot += in;
        else
        {
            if (tot < in)
                ++dis;
            else
                tot -= in;
        }
    }
    cout << tot << ' ' << dis << endl;
}