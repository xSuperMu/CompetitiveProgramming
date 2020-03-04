#include <iostream>
#include <string>
using namespace std;

string arr[100001];

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
        if (arr[i] != arr[i - 1])
            cnt++;

    cout << ++cnt << endl;
    return 0;
}