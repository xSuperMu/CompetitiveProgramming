#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        cnt += isupper(s[i]);

    if (cnt <= s.size() / 2)
        for (int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    else
        for (int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);

    cout << s << endl;

    return 0;
}