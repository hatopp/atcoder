#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n, m, x, t, d;
	cin >> n >> m >> x >> t >> d;

	cout << t - max(0, x - m) * d << endl;
	return 0;
}