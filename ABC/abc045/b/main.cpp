#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sa, sb, sc;
    cin >> sa >> sb >> sc;
    //int n = max (2,3);
    int n = sa.size() + sb.size() + sc.size();
    char tarn = 'a';

    for (int i = 0; i < n; i++)
    {

        if (tarn == 'a')
        {
            if (sa.size() == 0)
            {
                cout << 'A' << endl;
                return 0;
            }
            tarn = sa[0];
            sa.erase(sa.begin());
        }

        else if (tarn == 'b')
        {

            if (sb.size() == 0)
            {
                cout << 'B' << endl;
                return 0;
            }
            tarn = sb[0];
            sb.erase(sb.begin());
        }

        else if (tarn == 'c')
        {
            if (sc.size() == 0)
            {
                cout << 'C' << endl;
                return 0;
            }

            tarn = sc[0];
            sc.erase(sc.begin());
        }
    }
    return 0;
}