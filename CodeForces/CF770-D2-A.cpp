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
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int n, k;
    cin >> n >> k;
    string s = "";
    int looper = 0;
    while (n--)
    {
        if (looper == k)
            looper = 0;
        s += arr[looper++];
    }
    cout << s << endl;
    return 0;
}