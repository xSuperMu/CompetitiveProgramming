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
    int arr[26] = {0};
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        c = tolower(c);
        arr[c - 97] = 1;
    }
    bool flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}