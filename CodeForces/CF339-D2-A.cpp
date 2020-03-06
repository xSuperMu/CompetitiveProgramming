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
    string s;
    int arr[9] = {0}, cnt = 0, idx = 0;
    char r[110];
    getline(cin, s);

    char c;
    for (int i = 0; i < s.size(); i++)
    {
        c = s[i];
        if (int(c) >= 49 && int(c) <= 57)
        {
            arr[int(c) - 49] += 1;
            cnt++;
            idx = int(c) - 49;
        }
    }
    int f = cnt;
    int ss = -1;
    if (cnt == 1)
        cout << idx + 1 << endl;
    else
    {
        for (int t = 0; t < 9; t++)
        {
            int tot = arr[t];
            for (int i = 0; i < tot; i++)
            {
                ss++;
                r[ss] = '0' + t + 1;
            }
        }
        for (int i = 0; i < f; i++)
        {
            if (i == f - 1)
                cout << r[i] << endl;
            else
                cout << r[i] << '+';
        }
    }
    return 0;
}