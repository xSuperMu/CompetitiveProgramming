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

bool wub(int pos);
string in;
char arr[203];

int main()
{
    cin >> in;
    strcpy(arr, in.c_str());
    bool c_out = false;
    for (int i = 0; i < in.size();)
    {
        if (wub(i))
            i += 3;
        else
        {
            if (c_out)
                cout << " ";
            // Just for fun :)
            for (; i < in.size() && !wub(i); cout << arr[i], i++)
                ;
            c_out = true;
        }
    }
    cout << endl;
    return 0;
}

bool wub(int pos)
{
    return (arr[pos] == 'W' && arr[pos + 1] == 'U' && arr[pos + 2] == 'B');
}