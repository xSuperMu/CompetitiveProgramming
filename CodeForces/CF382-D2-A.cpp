#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str, sub;
    cin >> str >> sub;

    int delimiter = str.find('|');
    int l = delimiter;
    int r = str.length() - delimiter - 1;
    int t = (l + r + sub.length()) / 2;
    int tl = t - l;
    int tr = t - r;

    int R = r;
    int L = l;
    int siz = sub.length();
    while (R != L)
    {
        if (R > L)
        {
            siz--;
            L++;
        }
        else if (L > R)
        {
            siz--;
            R++;
        }
    }

    //    if (tl + l == tr + r && ((sub.length() + str.length()) % 2 != 0) && siz > 0 && siz % 2 == 0) {
    if (siz >= 0 && siz % 2 == 0)
    {
        int s = 0;
        while (s < tl)
            cout << sub[s++];

        for (int i = 0; i < str.length(); ++i)
            cout << str[i];

        int f = sub.length();
        while (tr--)
            cout << sub[--f];

        cout << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }

    return 0;
}