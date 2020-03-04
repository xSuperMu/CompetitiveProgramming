#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int i, p;
    for (i = 0, p = 0; i < t.size(); i++)
        if (t[i] == s[p])
            p++;
    cout << p + 1 << endl;
    return 0;
}