#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s, t, u;
	int a, b;
	cin >> s >> t >> a >> b >> u;

	if (s == u)
	{
		cout << a - 1 << " " << b << endl;
		return 0;
	}
	else
	{
		cout << a << " " << b - 1 << endl;
		return 0;
	}
}