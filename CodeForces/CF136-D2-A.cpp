#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int to[101], from[101];
    for (int i = 1; i <= n; i++)
        cin >> to[i];

    for (int i = 1; i <= n; i++)
        from[to[i]] = i;

    for (int i = 1; i <= n; i++)
        if (i == n)
            cout << from[i] << endl;
        else
            cout << from[i] << " ";

    return 0;
}