#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string y;

	cin >> y;
	int ans = 0;
	for (int i = 0; i < y.size(); i++)
	{

		ans += y[i] - 48;
	}
	cout << ans << endl;
}