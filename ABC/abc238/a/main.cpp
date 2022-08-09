#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	if (pow(2, n) > pow(n, 2))
	{
		cout << "Yes" << endl;
		return 0;
	}
	else
	{
		cout << "No" << endl;
		return 0;
	}
}