// problem ID:      12148
// problem Name:    Electricity
// problem Link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3300
#include <iostream>
using namespace std;

bool same_day(int d, int m, int y, int cur_d, int cur_m, int cur_y);

int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(void)
{
    int n, d = 0, m = 0, y = 0, c = 0, cur_d, cur_m, cur_y, cur_c, tot_days = 0, tot_cons = 0;

    while (cin >> n && n)
    {
        tot_days = 0, tot_cons = 0;
        while (n--)
        {
            cin >> cur_d >> cur_m >> cur_y >> cur_c;
            if (same_day(d, m, y, cur_d, cur_m, cur_y))
            {
                tot_days++;
                tot_cons += cur_c - c;
            }
            d = cur_d, m = cur_m, y = cur_y, c = cur_c;
        }
        cout << tot_days << " " << tot_cons << endl;
    }
    return 0;
}

bool same_day(int d, int m, int y, int cur_d, int cur_m, int cur_y)
{
    if (--cur_d == 0)
    {
        if (--cur_m == 0)
        {
            --cur_y;
            cur_m = 12;
        }

        cur_d = month_days[cur_m - 1];

        bool isleap = (cur_y % 4 == 0 && (cur_y % 100 != 0 || cur_y % 400 == 0));
        if (cur_m == 2 && isleap)
            cur_d = 29;
    }
    return d == cur_d && m == cur_m && y == cur_y;
}