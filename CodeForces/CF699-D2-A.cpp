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
//#include <bits/stdc++.h>
using namespace std;
bool cmd(int i, int j);

int main()
{
    int in;
    unsigned long n;
    vector<pair<char, unsigned long>> pos(200000);
    vector<unsigned long> v;
    cin >> in;
    for (int i = 0; i < in; i++)
        cin >> pos[i].first;
    for (int j = 0; j < in; j++)
        cin >> pos[j].second;

    for (int i = 0; i < in; i++)
        if (pos[i].first == 'R')
            if (pos[i + 1].first == 'L' && (i + 1) < in)
                v.push_back((pos[i + 1].second - pos[i].second) / 2);
    if (v.size() < 1)
        cout << -1 << endl;
    else
    {
        unsigned long min = v[0];
        for (int i = 1; i < v.size(); i++)
            if (v[i] < min)
                min = v[i];
        cout << min << endl;
    }

    return 0;
}