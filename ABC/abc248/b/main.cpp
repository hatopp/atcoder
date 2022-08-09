#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	ll count = 0;
	ll a, b, k;
	cin >> a >> b >> k;

	while (b > a)
	{
		a *= k;
		count++;
	}
	cout << count << endl;
}