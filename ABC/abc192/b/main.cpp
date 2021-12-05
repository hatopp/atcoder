#include <bits/stdc++.h>
using namespace std;

//英数小文字かの判定
bool IsAlphabetNumber(char src)
{

    //文字が英小文字かどうか判定
    if (src >= 'a' && src <= 'z')
    {
        return true;

        //文字が英大文字かどうか判定
    }
    else if (src >= 'A' && src <= 'Z')
    {
        return false;

        //文字が数字かどうか判定
    }
    else if (src >= '0')
    {
        return false;
    }
}

int main()
{
    int a, b, c, d, x, y, z, n;
    string s, sans;
    bool f, g;
    cin >> s;

    sans = "Yes";

    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0 && IsAlphabetNumber(s[i]) == false)
        {
            sans = "No";
            break;
        }
        else if (i % 2 == 1 && IsAlphabetNumber(s[i]) == true)
        {
            sans = "No";
            break;
        }
    }

    cout << sans << endl;
    return 0;
}
