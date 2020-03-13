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
int colour(int i, int j);
int b = 0, w = 0;
char v[4][4];
int main()
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> v[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            colour(i, j) == 1 ? ++w : ++b;
            colour(i, j + 1) == 1 ? ++w : ++b;
            colour(i + 1, j) == 1 ? ++w : ++b;
            colour(i + 1, j + 1) == 1 ? ++w : ++b;
            if ((b >= 3 && w <= 1) || (b <= 1 && w >= 3))
            {
                cout << "YES\n";
                return 0;
            }
            w = 0, b = 0;
        }
        w = 0, b = 0;
    }
    cout << "NO\n";
    return 0;
}

int colour(int i, int j)
{
    if (v[i][j] == '.')
        return 1;
    return 0;
}