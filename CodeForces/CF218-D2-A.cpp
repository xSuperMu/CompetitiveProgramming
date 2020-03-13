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
//#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &i, const pair<int, int> &j)
{
    return j.second > i.second;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(2 * n + 1);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 != 0 && k && v[i] > v[i + 1] + 1 && v[i] > v[i - 1] + 1)
        {
            --k;
            cout << v[i] - 1 << ' ';
        }
        else
            cout << v[i] << ' ';
    }
    return 0;
}