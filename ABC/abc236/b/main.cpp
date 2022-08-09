#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;

	int wa = 0;
	vector<int> v(n);
	for (int i = 0; i < 4 * n - 1; ++i)
	{
		int a;
		cin >> a;
		wa += a;
	}

	int hon = (1 + n) * n * 2;
	cout << hon - wa << endl;
	return 0;
}