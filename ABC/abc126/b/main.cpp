#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    int mae = stoi(s.substr(0, 2));
    int ato = stoi(s.substr(2, 2));
    

    vector<string> v{"YYMM", "MMYY", "AMBIGUOUS", "NA"};
    int ans;
    // mae が12より大きい あり得るなら、maeがyearの時
    if (mae > 12)
    {
        if (ato == 0)
        {
            ans = 3;
        }
        else if (ato > 12)
        {
            ans = 3;
        }
        else if (ato <= 12)
        {
            ans = 0;
        }
    }
    // mae が1~12の間の時
    else if (0 < mae && mae <= 12)
    {
        if (ato == 0)
        {
            ans = 1;
        }
        else if (ato > 12)
        {
            ans = 1;
        }
        else if (ato <= 12)
        {
            ans = 2;
        }
    }

    // mae == 0の時,つまりmaeはyear
    else
    {
        if (ato == 0)
        {
            ans = 3;
        }
        else if (ato > 12)
        {
            ans = 0;
        }
        else if (ato <= 12)
        {
            ans = 0;
        }
    }

    cout << v[ans] << endl;
    return 0;
}
