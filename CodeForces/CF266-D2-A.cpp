#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    vector<char> arr(50);
    int n, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}