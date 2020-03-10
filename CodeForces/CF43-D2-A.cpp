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

int find_position(string s);
void winner();
vector<pair<string, int>> v;

int main()
{
    int n, found;
    cin >> n;
    string in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        found = find_position(in);
        if (found != -1)
            ++v[found].second;
        else
            v.push_back(make_pair(in, 1));
    }

    winner();
    return 0;
}

int find_position(string s)
{
    for (int i = 0; i < v.size(); i++)
        if (v[i].first == s)
            return i;
    return -1;
}

void winner()
{
    int max_score = v[0].second;
    int max_score_position = 0;
    for (int i = 1; i < v.size(); i++)
        if (v[i].second > max_score)
        {
            max_score = v[i].second;
            max_score_position = i;
        }
    cout << v[max_score_position].first << endl;
}