#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace		std;
typedef long long	ll;

int	main(void)
{
	ll a, b, c, d, e, f, x;
	cin >> a >> b >> c >> d >> e >> f >> x;

	int long_t = (x / (a + c) * a + min(x % (a + c), a)) * b;
	int long_a = (x / (d + f) * d + min(x % (d + f), d)) * e;

    if (long_a == long_t)
        cout << "Draw" << endl;
	else if (max(long_a, long_t) == long_a)
		cout << "Aoki" << endl;
	else
		cout << "Takahashi" << endl;

	return (0);
}