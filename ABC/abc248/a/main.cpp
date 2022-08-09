#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int s;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < 10; i++)
	{
		ans += s % 10;
		s /= 10;
	}
	cout << 45 - ans << endl;
}