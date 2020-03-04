#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n, temp = 0, cnt = 0, num = 0, p = 0, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }

    while (q.size())
    {
        num = q.front();
        if (num > 0)
        {
            p += num;
            q.pop();
            continue;
        }
        else
        {
            if (p > 0)
            {
                p--;
                q.pop();
            }
            else if (p == 0)
            {
                s++;
                q.pop();
            }
        }
    }

    cout << s << endl;
    return 0;
}