#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <math.h>
#include <cstring>
using namespace std;

int main()
{
    int r, c, read;
    cin >> r >> c;
    read = r * c;
    bool condition = false;
    char ch;
    for (int i = 0; i < read; i++)
    {
        cin >> ch;
        if (ch == 'C' || ch == 'M' || ch == 'Y')
            condition = true;
    }

    if (condition)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;

    return 0;
}