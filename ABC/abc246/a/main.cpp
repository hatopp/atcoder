#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int x[3], y[3];
	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;
		x[i] = a;
		y[i] = b;
	}

	int ans;
	if (x[0] == x[1])
		ans = x[2];
	else if (x[1] == x[2])
		ans = x[0];
	else
		ans = x[1];

	int yans;
	if (y[0] == y[1])
		yans = y[2];
	else if (y[1] == y[2])
		yans = y[0];
	else
		yans = y[1];

	cout << ans << " " << yans << endl;
	return 0;
}