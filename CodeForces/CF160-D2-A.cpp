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
    //		TWINS
    int n, cnt = 0, temp, tot = 0;
    vector<vector<int>> v(100);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v[i].push_back(temp);
    }

    sort(v.begin(), v.begin() + n);
    tot = 0;

    for (int i = 0; i < n; i++)
    {
        tot += v[i][0];
        v[i].push_back(tot);
    }

    tot = 0;

    for (int i = n - 1; i > -1; i--)
    {
        tot += v[i][0];
        cnt++;
        if (i == 0 || tot > v[i - 1][1])
            break;
    }
    cout << cnt << endl;
    return 0;
}