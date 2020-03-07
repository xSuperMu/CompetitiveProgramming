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
    int n;
    vector<int> v(100001);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.begin() + n);
    int min = v[0];
    int max = v[n - 1];
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
        if (v[i] > min && v[i] < max)
            ++cnt;
    cout << cnt << endl;
    return 0;
}