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
int arr[1000];
int main()
{
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ++arr[num - 1];
    }

    sort(arr, arr + 1000, greater<int>());

    int max = arr[0];
    int total = 0;
    for (int i = 1; i < n; i++)
        total += arr[i];

    total >= max - 1 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}