#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int c_count = 0;
	int l_count = 0;
	bool ans = true;

	if (s[0] != 'A')
		ans = false;

	for (int i = 0; i < s.size(); i++)
	{
		if (2 <= i && i <= s.size() - 2)
		{
			if (s[i] == 'C')
				c_count++;
		}
		if ('a' <= s[i] && s[i] <= 'z')
		{
			l_count++;
		}
	}

	if (c_count != 1 || l_count != s.size() - 2)
	{
		ans = false;
	}

	string byn;
	if (ans == true)
	{
		byn = "AC";
	}
	else
	{
		byn = "WA";
	}
	cout << byn << endl;
	return 0;
}
