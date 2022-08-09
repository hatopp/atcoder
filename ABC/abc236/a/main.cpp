#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s;
	int a, b;
	cin >> s >> a >> b;
	swap(s[a - 1], s[b - 1]);
	cout << s << endl;
}