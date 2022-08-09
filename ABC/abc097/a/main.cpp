#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool f = false;

	if (abs(c - a) <= d)
		f = true;

	else if (abs(b - a) <= d && abs(c - b) <= d)
		f = true;

	string byn;
	if (f == true)
	{
		byn = "Yes";
	}
	else
	{
		byn = "No";
	}
	cout << byn << endl;
	return 0;
}
