#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main()
{
    int p, r, t, i;
    cin >> p >> r;

    for (i = 1; i < 1000000000; i++)
    {
        t = i * p;
        t = t % 10;
        if (t == 0 || t == r)
        {
            break;
        }
    }

    cout << i << endl;
    return 0;
}