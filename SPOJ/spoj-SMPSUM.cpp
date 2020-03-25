// problem ID:		SMPSUM
// problem Name:	SMPSUM - Iterated sums
// problem Link:	https://www.spoj.com/problems/SMPSUM/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, ans = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		ans += i*i;
	cout << ans << endl;
	return 0;
} 
