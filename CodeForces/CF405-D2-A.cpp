#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[100];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << arr[i] << endl;
            break;
        }
        cout << arr[i] << ' ';
    }
    return 0;
}