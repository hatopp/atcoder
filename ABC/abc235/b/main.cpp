#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	int t = v[0];

	for (int i = 1; i < n; i++)
	{
		if (t < v[i])
			t = v[i];
		else
			break;
	}
	cout << t << endl;
	return 0;
}
