#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin >> s;
	int l = s.size();
	for (int i = 0; i < 6 / l; i++)
	{
		cout << s;
	}
	cout << endl;
}