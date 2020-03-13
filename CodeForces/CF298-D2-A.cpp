#include <bits/stdc++.h>
using namespace std;

int right_most();
int left_most();
int n;
string str;
char arr[1000];

int main()
{
    cin >> n;
    cin >> str;
    strcpy(arr, str.c_str());

    int r = right_most(), l = left_most();

    if (r == -1 && l > 0)
        cout << l << ' ' << l - 1 << endl;
    else if (l == -1 && r > 0)
        cout << r << ' ' << r + 1 << endl;
    else if (l > 0 && r > 0)
        cout << r << ' ' << r + 1 << endl;

    return 0;
}

int left_most()
{
    for (int i = 0; i < n; i++)
        if (arr[i] == 'L')
            return i + 1;
    return -1;
}

int right_most()
{
    for (int i = n - 1; i >= 0; i--)
        if (arr[i] == 'R')
            return i + 1;
    return -1;
}