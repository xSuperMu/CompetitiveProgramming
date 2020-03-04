#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    deque<int> intDeq;
    int n, temp, t1 = 0, t2 = 0, n1 = 0, n2 = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        intDeq.push_back(temp);
    }

    bool Sereja = false;

    while (intDeq.size())
    {
        Sereja = !Sereja;
        n1 = n2 = 0;
        if (intDeq.size() > 1)
        {
            n1 = intDeq.front();
            n2 = intDeq.back();

            if (n1 >= n2)
            {
                intDeq.pop_front();
                if (Sereja)
                    t1 += n1;
                else
                    t2 += n1;
            }
            else
            {
                intDeq.pop_back();
                if (Sereja)
                    t1 += n2;
                else
                    t2 += n2;
            }
        }
        else
        {
            n1 = intDeq.front();
            if (Sereja)
                t1 += n1;
            else
                t2 += n1;
            intDeq.pop_front();
        }
    }

    cout << t1 << ' ' << t2 << endl;
}