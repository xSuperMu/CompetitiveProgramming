#include <iostream>
using namespace std;

int n;
int sum = 0;
int main()
{
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b >> c;
        if (a + b + c > 1)
            ++sum;
    }

    cout << sum << '\n';
    return 0;
}