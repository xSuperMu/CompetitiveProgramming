#include <bits/stdc++.h>
using namespace std;

int main()
{

    int prime, x;
    cin >> prime >> x;

    bool arr[51];
    memset(arr, true, sizeof(arr));
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i <= 8; i++)
    {
        if (arr[i])
        {
            for (int j = i * 2; j <= 50; j += i)
            {
                arr[j] = false;
            }
        }
    }

    if (arr[x] == false)
        cout << "NO\n";
    else
    {
        int firstprim = 0;
        for (int j = prime + 1; j <= 50; j++)
        {
            if (arr[j])
            {
                firstprim = j;
                break;
            }
        }
        if (firstprim == x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}