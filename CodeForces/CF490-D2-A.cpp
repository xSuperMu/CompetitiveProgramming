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

int n, temp, teams = 0;
int a, b, c;
int arr[5005] = {0};
bool flag[3] = {0, 0, 0};

int find_a()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
            return i;
        }
    }
}
int find_b()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            arr[i] = 0;
            return i;
        }
    }
}
int find_c()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 3)
        {
            arr[i] = 0;
            return i;
        }
    }
}

vector<vector<int>> v(2000);
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
            flag[0] = 1;
        if (temp == 2)
            flag[1] = 1;
        if (temp == 3)
            flag[2] = 1;
        arr[i] = temp;
    }

    if (flag[0] && flag[1] && flag[2])
    {
        //count teams
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                a += 1;
            if (arr[i] == 2)
                b += 1;
            if (arr[i] == 3)
                c += 1;
        }

        teams = min(a, min(b, c));

        //format teams
        for (int i = 0; i < teams; i++)
        {
            v[i].push_back(find_a() + 1);
            v[i].push_back(find_b() + 1);
            v[i].push_back(find_c() + 1);
        }

        //print values
        cout << teams << endl;
        for (int i = 0; i < teams; i++)
        {
            cout << v[i][0] << ' ' << v[i][1] << ' ' << v[i][2] << endl;
        }
    }
    else
        cout << 0 << endl;
    return 0;
}