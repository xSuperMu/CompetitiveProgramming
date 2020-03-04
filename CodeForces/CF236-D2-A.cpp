#include <iostream>
#include <string>
using namespace std;
int main()
{

    int arr[26] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        arr[s[i] - 'a']++;

    int x = 0;
    for (int i = 0; i < 26; i++)
        if (arr[i] > 0)
            x++;

    if (x % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}