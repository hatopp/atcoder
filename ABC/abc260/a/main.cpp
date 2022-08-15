#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin >> s;
	string ans;

	if (s[0] == s[2] && s[1] == s[2])
		ans = "-1";

	else if (s[0] == s[1])
		ans = s[2];

	else if (s[1] == s[2])
		ans = s[0];

	else if (s[0] == s[2])
		ans = s[1];

	else
		ans = s[0];

	cout << ans << endl;
	return 0;
}