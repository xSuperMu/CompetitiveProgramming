#include <stdio.h>
#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <math.h>
#include <cstring>
using namespace std;

bool is_vowel(char c);
int main()
{
    string in;
    cin >> in;
    int in_size = in.size();
    char c, arr[101];
    strcpy(arr, in.c_str());

    for (int i = 0; i < in_size; i++)
    {
        c = tolower(arr[i]);
        if (!is_vowel(c))
            cout << '.' << c;
    }
    cout << endl;
    return 0;
}

bool is_vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i' || c == 'y');
}