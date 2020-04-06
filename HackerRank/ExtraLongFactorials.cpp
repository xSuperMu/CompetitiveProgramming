// Problem ID:		extra-long-factorials
// Problem Name:	Extra Long Factorials
// Problem Link:	https://www.hackerrank.com/challenges/extra-long-factorials/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;


int get_last_digit(int arr[], int Size);
int get_last_digit(int arr[], int Size)
{
	int index = 0;
	for (int i = Size - 1; i >= 0; i--)
	{
		if (arr[i] != 0)
		{
			index = i;
			break;
		}
	}
	return index;
}
char char_arr[10000] = "";
int arr[10000];
int main()
{
	memset(arr, 0, sizeof(arr));
	arr[0] = 1;
	int index = 0;
	int Size = 200;
	int n;	cin >> n;
	for (int i = 0, j = 1; i < n; i++, j++)
	{
		int index = get_last_digit(arr, Size);
		for (int t = 0; t <= index; t++)
			arr[t] *= j;
		int f = 0;
		while (f <= index)
		{
			int mod = arr[f] % 10;
			int val = arr[f] / 10;
			arr[f] = mod;
			arr[f + 1] += val;
			f++;
			index = get_last_digit(arr, Size);
		}
	}
	int val = get_last_digit(arr,Size);
	int idx = val;
	for (int i = 0; i <= idx; i++,val--)
	{
		char_arr[i] = char(arr[val] + 48);
	}
	cout << char_arr << endl;
	return 0;
}
