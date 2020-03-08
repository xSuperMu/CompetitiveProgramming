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

    int n, k, temp, cnt = 0;
    vector<int> arr(51);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int kth = arr[k - 1];
    sort(arr.begin(), arr.begin() + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= kth && arr[i] != 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}