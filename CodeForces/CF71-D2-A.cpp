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
    string s;
    char a, z;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.size() > 10)
        {
            a = s[0];
            z = s[s.size() - 1];
            cout << a << to_string(s.size() - 2) << z << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}