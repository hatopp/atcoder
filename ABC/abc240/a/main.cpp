#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int a, b;
	cin >> a >> b;
	int x = abs(a - b);
	if (x == 1 || x == 9)
	{
		cout << "Yes" << endl;
		return 0;
	}
	cout << "No" << endl;
	return 0;
}