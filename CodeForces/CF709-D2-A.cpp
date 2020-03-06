#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int n, b, d, tot = 0, temp, cnt = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= b)
            tot += temp;
        if (tot > d)
        {
            tot = 0;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}