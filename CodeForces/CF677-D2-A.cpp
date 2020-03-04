#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, h, cnt = 0, num;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num >= h)
        {
            while (num > 0)
            {
                num -= h;
                cnt++;
            }
            num = -1;
        }
        else
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}