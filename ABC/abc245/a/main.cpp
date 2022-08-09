#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a < c)
	{
		cout << "Takahashi" << endl;
		return 0;
	}
	else if (a > c)
	{
		cout << "Aoki" << endl;
		return 0;
	}
	else if (b > d)
	{
		cout << "Aoki" << endl;
		return 0;
	}
	else
	{
		cout << "Takahashi" << endl;
		return 0;
	}
}