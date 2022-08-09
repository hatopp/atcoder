#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,w;
	cin >> s >> w;
	string ans = "unsafe";
	if(s>w){ans = "safe";}
	cout << ans << endl;
}