#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i + 2)
	{
		cout << s[i];
	}
	cout << endl;

	return 0;
}