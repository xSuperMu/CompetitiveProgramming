#include <bits/stdc++.h>
using namespace std;

int main()
{
    string exhibit = "";
    cin >> exhibit;
    int minsteps = 0;

    if (abs((int)'a' - (int)exhibit[0]) > 12)
        minsteps += 26 - abs((int)'a' - (int)exhibit[0]);
    else
        minsteps += abs((int)'a' - (int)exhibit[0]);

    for (int i = 0; i < exhibit.length() - 1; ++i)
    {
        if (abs((int)exhibit[i] - (int)exhibit[i + 1]) > 12)
            minsteps += 26 - abs((int)exhibit[i] - (int)exhibit[i + 1]);
        else
            minsteps += abs((int)exhibit[i] - (int)exhibit[i + 1]);
    }

    cout << minsteps << '\n';
    return 0;
}