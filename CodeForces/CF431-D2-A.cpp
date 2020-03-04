#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
using namespace std;

int arr[4];

int main()
{
    int t = 0, num = 0;
    string s;
    char c;
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        c = s[i];
        num = c - '0';
        t += arr[num - 1];
    }

    cout << t << endl;
    return 0;
}