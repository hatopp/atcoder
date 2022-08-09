#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	int abc;
	cin >> abc;
	int a = abc / 100;
	int c = abc % 10;
	int b = (abc - a * 100 - c) / 10;
	int wa = a + b + c;
	int ans = 111 * wa;
	cout << ans << endl;
	return 0;
}
