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
    int r[26] = {0}, tot = 0;
    string s;
    char c;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        c = s[i];
        if (int(c) >= 97 && int(c) <= 122)
            r[int(c) - 97] = 1;
    }
    for (int i = 0; i < 26; i++)
        if (r[i] > 0)
            ++tot;
    cout << tot << endl;

    return 0;
}