#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n, m, s, u;
	cin >> n >> m;

	int shita = 1;
	int ue;
	//縦h×横w

	while (m--)
	{
		cin >> s >> u;
		shita = max(shita, s);
		ue = min(ue, u);
	}
	cout << max(0, ue - shita + 1) << endl;
}
