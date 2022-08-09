#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());

	/*
		int k;
		for (int i = 0; i < s.size() - 1; i++)
		{
			for (int j = s.size() - 1; j > i; j--)
			{
				if (s[j] < s[j - 1])
				{
					k = s[j];
					s[j] = s[j - 1];
					s[j - 1] = k;
				}
			}
		}*/
	cout << s << endl;
	return 0;
}