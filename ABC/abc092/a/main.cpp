#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace		std;
typedef long long	ll;

int	main(void)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ans = min(a, b) + min(c, d);
	cout << ans << endl;
}