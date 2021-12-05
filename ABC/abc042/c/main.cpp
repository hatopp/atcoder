#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(10 - n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        auto ret = find_if(a.begin(), a.end(), i);
        if (ret == a.end())
        {
            for (int j = 0; j < 10 - n; ++j)
            {
                b[j] = i;
            }
        }
    }

    for (int i = 0; i < 10 - n; ++i)
    {
        cout << b[i] << endl;
    }

    return 0;
}

//ラムダ式を使うんだろうがわかりません、fineifのラムダ式の使い方、
//vectorの要素を探す方法
