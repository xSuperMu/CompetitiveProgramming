#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

void Fraction(long long n, long long d);
long long gcd(long long a, long long b);
int numerator, denominator;
int main()
{
    int n1, n2, n;
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        n = 1 + (6 - n1);
        Fraction(n, 6);
    }
    else
    {
        n = 1 + (6 - n2);
        Fraction(n, 6);
    }

    return 0;
}

long long gcd(long long a, long long b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

void Fraction(long long n, long long d)
{

    if (d == 0)
    {
        cerr << "Denominator may not be 0." << endl;
        exit(0);
    }
    else if (n == 0)
    {
        numerator = 0;
        denominator = 1;
        cout << "0/1" << endl;
    }
    else
    {
        int sign = 1;
        if (n < 0)
        {
            sign *= -1;
            n *= -1;
        }
        if (d < 0)
        {
            sign *= -1;
            d *= -1;
        }

        long long tmp = gcd(n, d);
        numerator = n / tmp * sign;
        denominator = d / tmp;
        cout << numerator << '/' << denominator << endl;
    }
}