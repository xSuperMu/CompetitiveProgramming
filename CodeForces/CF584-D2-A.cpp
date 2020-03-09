#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <math.h>
#include <cstring>
using namespace std;

int main()
{
    int n, t;
    string s = "";
    cin >> n >> t;
    if (t == 10 && n > 1)
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                s += to_string(0);
                break;
            }
            s += to_string(1);
        }
    else if (t < 10 && t >= 2)
        for (int i = 0; i < n; i++)
        {
            s += to_string(t);
        }
    else
        s = to_string(-1);
    cout << s << endl;

    return 0;
}