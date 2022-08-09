#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count = 1;
	int before = v[0];
	for (int i = 1; i < n; i++)
	{
		if (before != v[i])
		{
			count++;
			before = v[i];
		}
	}
	cout << count << endl;
	return 0;
}