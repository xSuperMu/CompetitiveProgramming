#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main()
{
    int n, n1, n2, cnt = 0;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> n1 >> n2;
        vec.push_back(make_pair(n1, n2));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            if (vec[i].first == vec[j].second)
                cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}