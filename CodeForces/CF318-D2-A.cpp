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
    int64_t n, k, result = 0;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        if (k > n / 2)
        {
            result = 2 * k - n;
        }
        else if (k <= n / 2)
        {
            result = 2 * k - 1;
        }
    }
    else
    {
        if (k > (n / 2) + 1)
        {
            result = 2 * k - n - 1;
        }
        else if (k <= (n / 2) + 1)
        {
            result = 2 * k - 1;
        }
    }
    cout << result << endl;
    return 0;
}