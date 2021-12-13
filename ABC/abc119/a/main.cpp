#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int nen = stoi(s.substr(0, 4));
    int tuki = stoi(s.substr(5, 2));
    int niti = stoi(s.substr(8, 2));

    string sans;
    if (nen > 2019)
    {
        sans = "TBD";
    }
    else if (nen < 2018)
    {
        sans = "Heisei";
    }

    //以下2018年
    else if (tuki > 4)
    {
        sans = "TBD";
    }
    else if (tuki < 4)
    {
        sans = "Heisei";
    }

    //以下2018年4月
    else
    {
        sans = "Heisei";
    }

    cout << sans << endl;
    return 0;
}