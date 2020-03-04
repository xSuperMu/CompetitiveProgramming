#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main()
{
    int arr[4], cnt = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j])
            {
                cnt++;
                arr[i] = -1;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}