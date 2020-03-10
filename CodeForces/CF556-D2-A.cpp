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

int main()
{
    int in, n, ones = 0, zeros = 0;
    cin >> in;
    char c;

    // Just for Fun. :)
    for (int i = 0; i < in && cin >> c; i++, n = c - '0', n == 1 ? ++ones : ++zeros)
        ;
    cout << abs(ones - zeros) << endl;
    return 0;
}