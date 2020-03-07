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

    string a, b;
    int a_Length = 0, b_length = 0;
    cin >> a >> b;
    if (a == b)
        cout << -1 << endl;
    else if (a != b)
    {
        a_Length = a.size();
        b_length = b.size();
        if (a_Length > b_length)
            cout << a_Length << endl;
        else
            cout << b_length << endl;
    }
    return 0;
}