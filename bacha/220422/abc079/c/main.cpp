#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string abcd;
	cin >> abcd;
	int a = abcd[0] - '0';
	int b = abcd[1] - '0';
	int c = abcd[2] - '0';
	int d = abcd[3] - '0';

	int wa = a + b + c + d;

	if (wa > 7)
	{
	}