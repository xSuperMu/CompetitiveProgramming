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
    int n, cnt = 0;
    string temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == "++X" || temp == "X++")
            ++cnt;
        else
            --cnt;
    }
    cout << cnt << endl;
    return 0;
}