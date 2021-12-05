#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    cin >> w;

    vector<string> a;
    sort(w.begin(), w.end()); // ｗの文字列を昇順ソート

    int len = w.length();
    int c_num = 0;
    char s = w[0]; //最初の文字を保つ

    for (int i = 0; i < len; i++)
    {
        if (w[i] != s) //見る文字と最初の文字が違ったら
        {
            a.push_back(w.substr(c_num, i - c_num)); //vectorに突っ込む
            c_num = i; //その時のiを保持
            s = w[i];  //最初の文字を更新
        }

        else if (i == len - 1)
        {
            a.push_back(w.substr(c_num, len));
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i].size() % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
