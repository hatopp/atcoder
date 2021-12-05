#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 500円玉　100円玉、50円玉、合計金額
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int count = 0;
    int money = 0;

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            for (int k = 0; k <= c; k++)
            {
                money = 500 * i + 100 * j + 50 * k;
                if (x == money)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
