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
    int n, mini = 0, maxi = 0;
    cin >> n;
    int city[100001];
    for (int i = 0; i < n; i++)
        cin >> city[i];

    int minimum = 10000;
    for (int i = 0; i < n; i++)
    {
        if (city[i] < minimum)
            minimum = city[i];
    }

    for (int i = 0; i < n; i++)
        city[i] += (abs(minimum) + 1);

    sort(city, city + n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mini = city[i + 1] - city[i];
            maxi = city[n - 1] - city[i];
        }
        else if (i == n - 1)
        {
            mini = city[i] - city[i - 1];
            maxi = city[i] - city[0];
        }
        else
        {
            mini = min((city[i] - city[i - 1]), (city[i + 1] - city[i]));
            maxi = max(city[n - 1] - city[i], city[i] - city[0]);
        }
        cout << mini << ' ' << maxi << endl;
    }
    return 0;
}