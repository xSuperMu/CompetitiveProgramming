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
    string n1, n2;
    cin >> n1 >> n2;
    char arr1[101];
    char arr2[101];

    strcpy(arr1, n1.c_str());
    strcpy(arr2, n2.c_str());

    for (int i = 0, j = n1.size() - 1; i < n1.size(); i++, j--)
    {
        if (arr1[i] != arr2[j])
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}