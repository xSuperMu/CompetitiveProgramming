#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <functional>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <math.h>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    bool flag = false;
    while (cin >> c)
    {
        if (c >= '5' && c < '9' || (c == '9' && flag))
            cout << '9' - c;
        else
            cout << c;
        flag = true;
    }
    cout << endl;
    return 0;
}