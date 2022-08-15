#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s = "atcoder";
	int l, r;
	cin >> l >> r;
	for (int i = l - 1; i < r; i++)
		cout << s[i];
	cout << endl;
	return 0;
}