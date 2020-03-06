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
    int n, m, r[101] = {0};
    int x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> r[i];

    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        r[x - 1] += y - 1;
        r[x + 1] += r[x] - y;
        r[x] = 0;
    }

    for (int i = 1; i <= n; i++)
        cout << r[i] << endl;

    return 0;
}