// problem ID:		STRHH
// problem Name:	STRHH - Half of the half
// problem Link:	https://www.spoj.com/problems/STRHH/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[101];

int main() {

	int n, i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < arr[i].size()/2 ; j += 2)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}



	return 0;
} 
