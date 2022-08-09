#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
/*

*/
int main()
{
	int n;
	cin >> n;

	vector<string> ans(n);
	ans[0] = "1";
	if (n == 1)
	{
		cout << ans[0] << endl;
		return 0;
	}

	for (int i = 1; i < n; i++)
	{
		ans[i] = ans[i - 1] + " " + to_string(i + 1) + " " + ans[i - 1];
	}
	cout << ans[n - 1] << endl;
	return 0;
}
