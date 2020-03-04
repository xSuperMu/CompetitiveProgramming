#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int arr[5][5];
int main()
{
    const int R = 2, C = 2;
    int r = 0, c = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }

    cout << abs(r - R) + abs(c - C) << endl;

    return 0;
}