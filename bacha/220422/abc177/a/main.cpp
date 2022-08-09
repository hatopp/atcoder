#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int d, t, s;
	cin >> d >> t >> s;

	bool f = false;
	if (s * t >= d)
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