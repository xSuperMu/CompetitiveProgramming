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

int main()
{
    int n, p, q, temp;
    int arr[100];
    bool flag = true;
    memset(arr, -1, sizeof(arr));
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> temp;
        arr[temp - 1] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        arr[temp - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 1)
            flag = false;
    }

    if (flag)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";
    return 0;
}